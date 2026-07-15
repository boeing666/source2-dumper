#include "html_writer.hpp"
#include "schema_util.hpp"

#include <algorithm>
#include <format>
#include <fstream>
#include <iterator>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

namespace schema {
namespace fs = std::filesystem;

static constexpr int kMaxRefs = 40;

// inline arrow icon (inherits color via currentColor), sized by CSS .ar
static const char* const kArrow =
    "<svg class=\"ar\" viewBox=\"0 0 24 24\" fill=\"none\" stroke=\"currentColor\" stroke-width=\"2.4\" "
    "stroke-linecap=\"round\" stroke-linejoin=\"round\"><path d=\"M4 12h13M12 6l6 6-6 6\"/></svg>";

// category color for a field type (drives the size/align bars + memory-map segments)
static const char* TypeCat(std::string_view t) {
	if (!t.empty() && t.back() == '*') {
		return "var(--cptr)";
	}
	if (t.find('<') != std::string_view::npos) {
		return "var(--ctmpl)";
	}
	for (const char* p : {"int", "uint", "float", "bool", "char", "double"}) {
		if (t.rfind(p, 0) == 0) {
			return "var(--cprim)";
		}
	}
	return "var(--cagg)";
}

// sort metrics for the home index
static int InheritDepth(CSchemaClassInfo* c) {
	int d = 0;
	for (CSchemaClassInfo* p = c; p && d < 64; ++d) {
		p = (p->m_nBaseClassCount && p->m_pBaseClasses && p->m_pBaseClasses[0].m_pClass) ? p->m_pBaseClasses[0].m_pClass : nullptr;
	}
	return d;
}
static void DatamapCounts(CSchemaClassInfo* c, int& ni, int& no, int& nk) {
	ni = no = nk = 0;
	const datamap_t* dm = c->m_pDataMap;
	if (!dm || dm->dataNumFields <= 0 || !dm->dataDesc) {
		return;
	}
	constexpr int F_KEY = 1 << 2, F_INPUT = 1 << 3, F_OUTPUT = 1 << 4, F_PROC_KEY = 1 << 12;
	for (int i = 0; i < dm->dataNumFields; ++i) {
		const typedescription_t& td = dm->dataDesc[i];
		const bool hasFn = td.fieldName && *td.fieldName;
		const bool hasExt = td.externalName && *td.externalName;
		if (!hasFn && !hasExt) {
			continue;
		}
		if (td.flags & F_INPUT) {
			++ni;
		} else if (td.flags & F_OUTPUT) {
			++no;
		} else if (td.flags & (F_KEY | F_PROC_KEY) || hasExt) {
			++nk;
		}
	}
}

static std::string LinkType(std::string_view type, const std::unordered_set<std::string>& known) {
	std::string out;
	for (size_t i = 0; i < type.size();) {
		if (!IdentChar(type[i])) {
			out += HtmlEscape(std::string_view(&type[i], 1));
			++i;
			continue;
		}
		size_t j = i;
		while (j < type.size() && IdentChar(type[j])) {
			++j;
		}
		std::string id(type.substr(i, j - i));
		if (known.count(id)) {
			out += "<a class=\"ty\" href=\"#" + SafeName(id) + "\">" + HtmlEscape(id) + "</a>";
		} else {
			out += HtmlEscape(id);
		}
		i = j;
	}
	return out;
}

static void CollectRefs(CSchemaClassInfo* c, const std::vector<const SchemaClassFieldData_t*>& fields,
                        const std::unordered_set<std::string>& known, std::vector<std::string>& out) {
	std::unordered_set<std::string> local;
	auto scan = [&](std::string_view s) {
		for (size_t i = 0; i < s.size();) {
			if (!IdentChar(s[i])) {
				++i;
				continue;
			}
			size_t j = i;
			while (j < s.size() && IdentChar(s[j])) {
				++j;
			}
			std::string id(s.substr(i, j - i));
			if (known.count(id)) {
				local.insert(std::move(id));
			}
			i = j;
		}
	};
	if (const char* p = ParentName(c)) {
		scan(p);
	}
	for (auto* f : fields) {
		scan(TypeName(f->m_pType));
	}
	local.erase(c->m_pszName);
	for (auto& s : local) {
		out.push_back(s);
	}
}

// number rendered in dec, with its hex twin in data-h; the header "hex" toggle swaps them site-wide
static std::string Num(long long v) {
	const std::string hex = v < 0 ? std::format("-0x{:X}", -v) : std::format("0x{:X}", v);
	return "<span class=\"nv\" data-h=\"" + hex + "\">" + std::to_string(v) + "</span>";
}

static std::string RefsHtml(const std::vector<std::string>& referencedBy) {
	if (referencedBy.empty()) {
		return "";
	}
	const size_t n = referencedBy.size();
	std::string s = "<div class=\"refs\"><div class=\"sec-h\">referenced by <span class=\"cnt\">"
	              + std::to_string(n) + "</span></div><div class=\"chips\">";
	auto chip = [](const std::string& r) {
		return "<a class=\"chip\" href=\"#" + SafeName(r) + "\">" + HtmlEscape(r) + "</a>";
	};
	for (size_t i = 0; i < n && i < kMaxRefs; ++i) {
		s += chip(referencedBy[i]);
	}
	if (n > kMaxRefs) {
		// the extras live in a data attribute (CSV) and become chips only when the button
		// is clicked (tglMore) — keeps ~11k hidden DOM nodes out of the initial parse
		std::string csv;
		for (size_t i = kMaxRefs; i < n; ++i) {
			if (i > kMaxRefs) {
				csv += ',';
			}
			csv += referencedBy[i];
		}
		s += std::format("<button class=\"chip more\" data-more=\"{}\" onclick=\"tglMore(this)\">+{} more</button>",
		                 HtmlEscape(csv), n - kMaxRefs);
	}
	s += "</div></div>";
	return s;
}

static std::string ClassHtml(CSchemaClassInfo* c, const std::vector<const SchemaClassFieldData_t*>& fields,
                             const std::unordered_set<std::string>& known,
                             const std::vector<std::string>& referencedBy, bool embedded) {
	const std::string name = c->m_pszName;
	const bool isStruct = IsStructName(name);

	// signature splits in two when there is a side panel: decl+copy+sizeof over the code,
	// the remaining badges over the side column
	std::string badgesL = "<button class=\"tag cp\" onclick=\"copySchema(this)\" title=\"copy as DECLARE_SCHEMA_CLASS / SCHEMA_FIELD\">&#x29C9; copy as schema</button>";
	badgesL += "<button class=\"tag cp\" onclick=\"copyFields(this)\" title=\"copy field declarations without offsets\">&#x29C9; copy fields</button>";
	badgesL += "<span class=\"tag sz\">sizeof<b>" + Num(c->m_nSize) + "</b></span>";

	std::string badgesR;
	if (c->m_nAlignment != 0xFF) {
		badgesR += "<span class=\"tag sz\" title=\"alignof: required memory alignment of the class\">align<b>"
		         + Num(c->m_nAlignment) + "</b></span>";
	}
	if (c->m_pszProjectName && *c->m_pszProjectName) {
		badgesR += "<span class=\"tag proj\">" + HtmlEscape(c->m_pszProjectName) + "</span>";
	}
	if (embedded) {
		badgesR += "<span class=\"tag emb\">embedded</span>";
	}
	if (std::string fl = ClassFlags(c->m_nFlags1); !fl.empty()) {
		badgesR += "<span class=\"tag fl\">" + HtmlEscape(fl) + "</span>";
	}

	std::string decl = "<span class=\"kw\">" + std::string(isStruct ? "struct" : "class") + "</span> <span class=\"cn\">" + HtmlEscape(name) + "</span>";
	for (uint8 b = 0; b < c->m_nBaseClassCount && c->m_pBaseClasses; ++b) {
		const SchemaBaseClassInfoData_t& bc = c->m_pBaseClasses[b];
		if (!bc.m_pClass) {
			continue;
		}
		decl += (b == 0) ? " : " : ", ";
		// link only to !GlobalTypes (module-specific names may dedup to a different scope's twin)
		const char* bn = bc.m_pClass->m_pszName;
		decl += "<span class=\"kw\">public</span> ";
		decl += known.count(bn) ? "<a class=\"ty\" href=\"#" + SafeName(bn) + "\">" + HtmlEscape(bn) + "</a>"
		                        : "<span class=\"ty\">" + HtmlEscape(bn) + "</span>";
		if (bc.m_nOffset) {
			decl += "<span class=\"cm\">/*" + Num(bc.m_nOffset) + "*/</span>";
		}
	}
	if (auto m = MetaTags(c->m_nStaticMetadataCount, c->m_pStaticMetadata); !m.empty()) {
		decl += " <span class=\"meta\">{" + HtmlEscape(JoinTags(m)) + "}</span>";
	}

	// body = memory-map scale bar + centered sizeof/align + borderless table
	// (offset · size[colored bar] · type · name · align[mini bar]); colors by type category.
	auto barW = [](int sz) { return std::max(20, std::min(160, sz * 6)); };
	std::string segs, rows;
	int cursor = 0;
	auto pad = [&](int from, int to) {
		if (to > from) {
			const int sz = to - from;
			segs += std::format("<span class=\"pseg\" title=\"padding &middot; {} B\" style=\"flex:{};background:var(--cpad)\"></span>", sz, sz);
			rows += "<div class=\"tr padrow\"><span class=\"td c-off\">" + Num(from)
			      + "</span><span class=\"td c-size\"><span class=\"bar\" style=\"min-width:" + std::to_string(barW(sz))
			      + "px;background:var(--cpad)\">" + Num(sz) + "</span></span>"
			      + "<span class=\"td c-type\"><span class=\"ty\">char</span></span>"
			      + "<span class=\"td c-name padc\">_pad[" + Num(sz) + "]</span>"
			      + "<span class=\"td c-align\">" + Num(1) + "</span></div>";
		}
	};
	for (const SchemaClassFieldData_t* f : fields) {
		const int off = f->m_nSingleInheritanceOffset;
		int size;
		uint8 align;
		TypeSize(f->m_pType, size, align);
		if (size <= 0) {
			size = 1;
		}
		pad(cursor, off);

		const char* rawType = TypeName(f->m_pType);
		const char* cc = TypeCat(rawType);
		const std::string fn = HtmlEscape(f->m_pszName ? f->m_pszName : "field");
		const std::string mid = SafeName(std::string(name) + "::" + (f->m_pszName ? f->m_pszName : "field"));
		std::string meta;
		if (auto tags = MetaTags(f->m_nStaticMetadataCount, f->m_pStaticMetadata); !tags.empty()) {
			meta = " <span class=\"meta\">" + HtmlEscape(JoinTags(tags)) + "</span>";
		}
		const std::string flink = "<a class=\"fl\" href=\"#" + SafeName(name) + "/" + mid + "\" title=\"copy link to field\">&sect;</a>";

		int bits;
		std::string typeCell, alignCell;
		if (FieldBits(f->m_pType, bits)) {
			typeCell = "<span class=\"ty\">" + std::string(BitUnderlying(bits)) + "</span>";
			meta = " <span class=\"cm\">: " + std::to_string(bits) + "</span>" + meta;
			alignCell = "<span class=\"c-align-n\">-</span>";
		} else {
			typeCell = LinkType(rawType, known);
			if (align != 0xFF) {
				alignCell = std::format("<span class=\"abar\" style=\"width:{}px;background:{}\"></span>", std::min(32, align * 3), cc)
				          + "<span class=\"c-align-n\">" + Num(align) + "</span>";
			} else {
				alignCell = "<span class=\"c-align-n\">-</span>";
			}
		}
		segs += std::format("<span data-i=\"{}\" title=\"{} &middot; {} B\" style=\"flex:{};background:{};opacity:.9\"></span>",
		                    off, fn, size, size, cc);
		rows += "<div class=\"tr\"><span class=\"td c-off\">" + Num(off)
		      + "</span><span class=\"td c-size\"><span class=\"bar\" style=\"min-width:" + std::to_string(barW(size))
		      + "px;background:" + cc + "\">" + Num(size) + "</span></span>"
		      + "<span class=\"td c-type\">" + typeCell + "</span>"
		      + "<span class=\"td c-name\"><span class=\"mb\" id=\"" + mid + "\">" + fn + "</span>" + meta + " " + flink + "</span>"
		      + "<span class=\"td c-align\">" + alignCell + "</span></div>";
		cursor = std::max(cursor, off + size);
	}
	pad(cursor, c->m_nSize);

	std::string s = "<div class=\"cbody\"><div class=\"map\">" + segs + "</div>";
	s += "<div class=\"capc\">sizeof <b>" + Num(c->m_nSize) + "</b>";
	if (c->m_nAlignment != 0xFF) {
		s += " &middot; align <b>" + Num(c->m_nAlignment) + "</b>";
	}
	s += "</div>";
	s += "<div class=\"tbl\"><div class=\"tr thr\"><span class=\"th\">offset</span><span class=\"th\">size</span>"
	     "<span class=\"th\">type</span><span class=\"th c-name\">name</span><span class=\"th\">align</span></div>"
	     + rows + "</div></div>";

	// side panel is built below (datamap first, referenced-by appended last)
	std::string side;

	// top bar: back button + inheritance chain, this class first -> ... -> root parent last
	std::string topRow = "<div class=\"dtop\"><a class=\"back\" href=\"#\" title=\"back to index\">&larr;</a>";
	std::vector<CSchemaClassInfo*> chain;
	for (CSchemaClassInfo* p = c; p && chain.size() < 64;) {
		chain.push_back(p);
		p = (p->m_nBaseClassCount && p->m_pBaseClasses && p->m_pBaseClasses[0].m_pClass)
		    ? p->m_pBaseClasses[0].m_pClass : nullptr;
	}
	if (chain.size() > 1) {
		topRow += "<span class=\"chain-row\">";
		for (size_t i = 0; i < chain.size(); ++i) {
			if (i) {
				topRow += "<span class=\"arr\">" + std::string(kArrow) + "</span>";
			}
			CSchemaClassInfo* p = chain[i];
			if (p == c) {
				topRow += "<span class=\"chip cur\">" + HtmlEscape(p->m_pszName) + "</span>";
			} else if (known.count(p->m_pszName)) {
				topRow += "<a class=\"chip\" href=\"#" + SafeName(p->m_pszName) + "\">" + HtmlEscape(p->m_pszName) + "</a>";
			} else {
				topRow += "<span class=\"chip\">" + HtmlEscape(p->m_pszName) + "</span>";
			}
		}
		topRow += "</span>";
	}
	topRow += "</div>";

	// legacy datamap, split by kind: inputs / outputs / keyfields / plain data fields
	if (c->m_pDataMap && c->m_pDataMap->dataNumFields > 0 && c->m_pDataMap->dataDesc) {
		// CS2 typedescription_t flags (empirically verified against CBaseEntity):
		//   1<<2  DEFINE_KEYFIELD   (externalName = key, fieldOffset -> member)
		//   1<<3  DEFINE_INPUTFUNC
		//   1<<4  DEFINE_OUTPUT
		//   1<<12 procedural keyfield (custom KeyValue parser, no member offset:
		//         angles/origin/model/subclass_name/... set via CreateEntityByName keyvalues)
		constexpr int F_KEY = 1 << 2, F_INPUT = 1 << 3, F_OUTPUT = 1 << 4, F_PROC_KEY = 1 << 12;
		const datamap_t* dm = c->m_pDataMap;
		// flattened offset -> schema member, so a datamap entry links to the field it writes
		struct Span { int off; int size; const char* name; const char* owner; };
		std::vector<Span> spans;
		for (CSchemaClassInfo* p = c; p;
		     p = (p->m_nBaseClassCount && p->m_pBaseClasses && p->m_pBaseClasses[0].m_pClass) ? p->m_pBaseClasses[0].m_pClass : nullptr) {
			for (uint16 i = 0; i < p->m_nFieldCount && p->m_pFields; ++i) {
				const SchemaClassFieldData_t& f = p->m_pFields[i];
				if (!f.m_pszName) {
					continue;
				}
				int sz; uint8 al;
				TypeSize(f.m_pType, sz, al);
				spans.push_back({ f.m_nSingleInheritanceOffset, sz > 0 ? sz : 1, f.m_pszName, p->m_pszName });
			}
		}
		auto memberLink = [&](int off) -> std::string {
			if (off < 0 || off == 0x7FFFFFFF) {
				return "";
			}
			const Span* best = nullptr;
			for (const Span& sp : spans) {
				if (off >= sp.off && off < sp.off + sp.size && (!best || sp.size < best->size)) {
					best = &sp;
				}
			}
			if (!best) {
				return "";
			}
			std::string link = "<a class=\"mlink\" href=\"#" + SafeName(std::string(best->owner) + "::" + best->name)
			                 + "\">" + HtmlEscape(best->name) + "</a>";
			if (off != best->off) {
				link += "<span class=\"cm\">+" + Num(off - best->off) + "</span>";
			}
			return link;
		};

		int rowCount = 0;
		std::string inputs, outputs, keys, data;
		// one row = 4 grid cells: key, arrow, target, field type
		auto drow = [&](const std::string& key, const std::string& target, int type) {
			std::string r = "<span class=\"k\">" + key + "</span>";
			r += target.empty() ? "<span></span><span></span>"
			                     : "<span class=\"arr\">" + std::string(kArrow) + "</span><span class=\"tgt\">" + target + "</span>";
			r += "<span class=\"t\">" + std::string(FieldTypeName(type)) + "</span>";
			++rowCount;
			return r;
		};
		for (int i = 0; i < dm->dataNumFields; ++i) {
			const typedescription_t& td = dm->dataDesc[i];
			const char* fn  = td.fieldName;
			const char* ext = td.externalName;
			const bool hasFn  = fn && *fn;
			const bool hasExt = ext && *ext;
			if (!hasFn && !hasExt) {
				continue;
			}
			const int type = static_cast<int>(td.fieldType);
			const std::string writes = memberLink(td.fieldOffset);
			if (td.flags & F_INPUT) {
				// key = input name (AcceptEntityInput), target = handler method;
				// the predictable "Input<Key>" handler is omitted to keep rows narrow
				std::string handler;
				if (hasFn && (!hasExt || fn != ext)) {
					if (!hasExt || std::string_view(fn) != "Input" + std::string(ext)) {
						handler = "<span class=\"fn\">" + HtmlEscape(fn) + "()</span>";
					}
				}
				inputs += drow(HtmlEscape(hasExt ? ext : fn), handler, type);
			} else if (td.flags & F_OUTPUT) {
				outputs += drow(HtmlEscape(hasExt ? ext : fn), writes, type);
			} else if (td.flags & (F_KEY | F_PROC_KEY) || hasExt) {
				// DEFINE_KEYFIELD (member offset) or procedural keyfield (custom parser, no member)
				std::string target = writes;
				if (target.empty() && hasExt && hasFn && fn != ext) {
					target = "<span class=\"fn\">" + HtmlEscape(fn) + "</span>";
				}
				keys += drow(HtmlEscape(hasExt ? ext : fn), target, type);
			} else {
				data += drow(HtmlEscape(fn), writes, type);
			}
		}

		if (rowCount > 0) {
			side += std::format("<div class=\"dm\"><div class=\"sec-h\">datamap <span class=\"cnt\">{}</span></div>", rowCount);
			auto col = [](const char* title, const std::string& body) {
				return body.empty() ? std::string()
				     : std::string("<div class=\"dsub\">") + title + "</div><div class=\"dmg\">" + body + "</div>";
			};
			// inputs + outputs share one row (50/50); keyfields + fields full width below
			if (!inputs.empty() || !outputs.empty()) {
				side += "<div class=\"dm2\"><div>" + col("inputs", inputs) + "</div><div>" + col("outputs", outputs) + "</div></div>";
			}
			side += col("keyfields", keys) + col("fields", data);
			side += "</div>";
		}
	}
	side += RefsHtml(referencedBy);   // referenced-by goes last, at the very bottom

	// single column: signature, code body, then the side panel (refs + datamap) stacked below
	std::string out = topRow + "<div class=\"cls\" id=\"" + SafeName(name)
	                + "\" data-k=\"" + (isStruct ? "struct" : "class") + "\">";
	out += "<div class=\"sig\">" + badgesL + badgesR + decl + "</div>";
	out += s; // field table
	if (!side.empty()) {
		out += "<div class=\"side\">" + side + "</div>";
	}
	out += "</div>\n";
	return out;
}

static std::string EnumHtml(CSchemaEnumInfo* e, const std::vector<std::string>& referencedBy) {
	const std::string name = e->m_pszName;
	const std::string badgesL = "<span class=\"tag sz\">sizeof<b>" + Num(e->m_nSize) + "</b></span>";
	std::string badgesR;
	if (e->m_pszProjectName && *e->m_pszProjectName) {
		badgesR = "<span class=\"tag proj\">" + HtmlEscape(e->m_pszProjectName) + "</span>";
	}
	const std::string decl = "<span class=\"kw\">enum</span> <span class=\"cn\">" + HtmlEscape(name)
	                       + "</span> : <span class=\"ty\">" + EnumUnderlying(e->m_nSize) + "</span>";
	const std::string refs = RefsHtml(referencedBy);

	std::string s = "<div class=\"dtop\"><a class=\"back\" href=\"#\" title=\"back to index\">&larr;</a></div>"
	              + std::string("<div class=\"cls\" id=\"") + SafeName(name) + "\" data-k=\"enum\">";
	s += "<div class=\"sig\">" + badgesL + badgesR + decl + "</div>";
	s += "<pre class=\"bd\">{\n";
	for (uint16 i = 0; i < e->m_nEnumeratorCount && e->m_pEnumerators; ++i) {
		const auto& en = e->m_pEnumerators[i];
		s += "    <span class=\"mb\">" + HtmlEscape(en.m_pszName ? en.m_pszName : "?") + "</span> = <span class=\"oh\">"
		   + Num(static_cast<long long>(en.m_nValue)) + "</span>,\n";
	}
	s += "};</pre>";
	if (!refs.empty()) {
		s += "<div class=\"side\">" + refs + "</div>";
	}
	s += "</div>\n";
	return s;
}


void WritePlatformPage(const fs::path& outDir, const std::vector<Module>& modules,
                       const std::unordered_set<std::string>& known,
                       const std::string& gameVersion, const std::string& serverVersion) {
	fs::create_directories(outDir);

	// refs[A] = classes that reference A
	std::unordered_map<std::string, std::vector<std::string>> refs;
	for (const Module& m : modules) {
		for (const ClassRec& rec : m.classes) {
			std::vector<std::string> out;
			CollectRefs(rec.info, rec.fields, known, out);
			for (const std::string& t : out) {
				refs[t].push_back(rec.info->m_pszName);
			}
		}
	}
	for (auto& [k, v] : refs) {
		std::sort(v.begin(), v.end());
		v.erase(std::unique(v.begin(), v.end()), v.end());
	}

	int total = 0;
	for (const Module& m : modules) {
		total += (int)(m.classes.size() + m.enums.size());
	}

	std::ofstream page(outDir / (std::string(PLATFORM_NAME) + ".html"), std::ios::trunc);
	page << R"(<!doctype html>
<html lang="en"><head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Source 2 Schema ()" << PLATFORM_NAME << R"()</title>
<style>
  :root{--bg:#17181d;--panel:#1e2026;--panel2:#24262e;--border:#2c2f38;--fg:#d7dae2;--mut:#8b91a0;--acc:#4ec9b0;
        --kw:#569cd6;--ty:#4ec9b0;--mb:#9cdcfe;--cm:#6a9955;--pad:#565b66;--num:#b5cea8;--emb:#c586c0;--meta:#ce9178;--fl:#dcdcaa;--enm:#e5c07b;--flash:#2d3a2d;
        --zeb:#22242b;--hov:#2a3a37;
        --cptr:#e5c07b;--ctmpl:#c586c0;--cprim:#569cd6;--cagg:#4ec9b0;--cpad:#7e8593;
        --mono:ui-monospace,'Cascadia Code',Consolas,'JetBrains Mono',monospace;--shadow:0 1px 3px rgba(0,0,0,.25)}
  @media(prefers-color-scheme:light){:root{--bg:#f6f7f9;--panel:#fff;--panel2:#f0f1f4;--border:#dfe2e8;--fg:#1f2328;--mut:#6e7781;--acc:#0e7569;
        --kw:#0550ae;--ty:#0e7569;--mb:#0a3069;--cm:#1a7f37;--pad:#a5aab4;--num:#0550ae;--emb:#8250df;--meta:#a31515;--fl:#7d6520;--enm:#b45309;--flash:#fff8c5;
        --zeb:#f4f5f8;--hov:#e2efe9;
        --cptr:#b45309;--ctmpl:#8250df;--cprim:#0550ae;--cagg:#0e7569;--cpad:#aab0bb;
        --shadow:0 1px 3px rgba(31,35,40,.08)}}
  *{box-sizing:border-box}
  body{margin:0;font:16px/1.6 -apple-system,'Segoe UI',Roboto,sans-serif;background:var(--bg);color:var(--fg)}
  ::-webkit-scrollbar{width:10px;height:10px}
  ::-webkit-scrollbar-thumb{background:var(--border);border-radius:5px;border:2px solid var(--bg)}
  ::-webkit-scrollbar-thumb:hover{background:var(--mut)}
  /* top bar */
  .top{position:sticky;top:0;z-index:20;display:flex;align-items:center;gap:12px;padding:9px 16px;background:var(--panel);border-bottom:1px solid var(--border)}
  .brand{font-size:15px;font-weight:650;letter-spacing:.2px;white-space:nowrap}
  .brand::before{content:"{;}";color:var(--acc);font-family:var(--mono);margin-right:8px;font-weight:700}
  .sp{flex:1}
  .ver{color:var(--fg);font-weight:600;font-size:12.5px;font-family:var(--mono);white-space:nowrap}
  #menu{display:none}
  .top button{background:var(--panel2);border:1px solid var(--border);border-radius:7px;color:var(--mut);cursor:pointer;padding:6px 10px;font-size:15px;line-height:1}
  .top button:hover{color:var(--acc);border-color:var(--acc)}
  #tabs a{color:var(--mut);text-decoration:none;padding:5px 12px;background:var(--panel2);border-radius:7px;margin-left:6px;font-size:13px}
  #tabs a:hover{color:var(--fg)}
  #tabs a.cur{background:var(--acc);color:#fff}
  .gwrap{position:relative}
  #opts{position:absolute;top:calc(100% + 8px);right:0;z-index:21;background:var(--panel);border:1px solid var(--border);border-radius:9px;box-shadow:0 14px 44px rgba(0,0,0,.45);padding:10px;display:flex;flex-direction:column;gap:8px;min-width:150px}
  #opts[hidden]{display:none}
  .opt-m{color:var(--mut);font-size:12px;border-top:1px solid var(--border);padding-top:8px}
  /* app: sidebar + content */
  .app{display:flex;align-items:flex-start}
  .sidebar{position:sticky;top:51px;align-self:flex-start;max-height:calc(100vh - 51px);width:270px;flex:none;background:var(--panel);
           border-right:1px solid var(--border);display:flex;flex-direction:column;overflow:visible}
  #qwrap{position:relative;padding:12px;border-bottom:1px solid var(--border)}
  .qhint{color:var(--mut);font:11px/1.4 var(--mono);margin:0 0 7px}
  .qhint b{color:var(--fg);font-weight:600}
  #q{width:100%;padding:9px 12px;background:var(--panel2);border:1px solid var(--border);border-radius:8px;color:var(--fg);font-size:14.5px}
  #q::placeholder{color:var(--mut)}
  #q:focus{outline:none;border-color:var(--acc)}
  #sugg{position:absolute;top:calc(100% - 2px);left:12px;width:min(560px,70vw);z-index:30;max-height:70vh;overflow:auto;
        background:var(--panel);border:1px solid var(--border);border-radius:9px;box-shadow:0 14px 44px rgba(0,0,0,.45)}
  #sugg[hidden]{display:none}
  .s-it{display:flex;align-items:center;gap:9px;padding:7px 12px;text-decoration:none;color:var(--fg);font-family:var(--mono);font-size:13px}
  .s-it:hover,.s-it.sel{background:var(--panel2)}
  .s-n{flex:1;white-space:nowrap;overflow:hidden;text-overflow:ellipsis}
  .s-f{color:var(--mut)}
  .s-m{color:var(--mut);font-size:11px;white-space:nowrap}
  .sortwrap{display:flex;align-items:center;gap:8px;padding:10px 12px;border-bottom:1px solid var(--border)}
  .sortl{color:var(--mut);font:600 11px/1 -apple-system,'Segoe UI',sans-serif;text-transform:uppercase;letter-spacing:.6px}
  #sort{flex:1;padding:6px 8px;background:var(--panel2);border:1px solid var(--border);border-radius:7px;color:var(--fg);font-size:13px;cursor:pointer}
  #sort:focus{outline:none;border-color:var(--acc)}
  .it .mv{margin-left:auto;color:var(--num);font-size:12px;padding-left:8px}
  .secs{flex:1;overflow:auto;padding-bottom:10px}
  .sec{padding:6px 0}
  .sec-t{padding:8px 14px 6px;color:var(--mut);font:600 11px/1 -apple-system,'Segoe UI',sans-serif;text-transform:uppercase;letter-spacing:.6px}
  .frow{display:flex;align-items:center;gap:9px;padding:5px 14px;font:13.5px/1.25 var(--mono);color:var(--fg);cursor:pointer}
  .frow:hover{background:var(--hov)}
  .frow.on{background:color-mix(in srgb,var(--acc) 15%,transparent)}
  .frow .ct{margin-left:auto;color:var(--mut);font-size:11px}
  .frow .ck{width:14px;height:14px;border:1px solid var(--mut);border-radius:3px;flex:none}
  .frow.on .ck{background:var(--acc);border-color:var(--acc)}
  #scrim{display:none}
  /* home = every type grouped by module, columns, filterable */
  .grp{margin-bottom:22px}
  .grp-h{display:flex;align-items:center;gap:8px;color:var(--mut);font:600 13px/1 var(--mono);text-transform:uppercase;letter-spacing:.6px;margin:0 0 10px;padding-bottom:7px;border-bottom:1px solid var(--border)}
  .grp-h .c{color:var(--fg);font-weight:700}
  .cols{display:grid;grid-template-columns:repeat(4,minmax(0,1fr));gap:0}
  @media(max-width:1100px){.cols{grid-template-columns:repeat(3,minmax(0,1fr))}}
  @media(max-width:820px){.cols{grid-template-columns:repeat(2,minmax(0,1fr))}}
  @media(max-width:520px){.cols{grid-template-columns:1fr}}
  .it{display:flex;align-items:center;gap:9px;padding:3px 14px;font:14.5px/1.7 var(--mono);color:var(--fg);text-decoration:none;border-right:1px solid var(--bd)}
  .it:hover{background:var(--hov);color:var(--acc)}
  .kb{width:18px;height:18px;border-radius:4px;display:inline-flex;align-items:center;justify-content:center;font:700 10.5px/1 var(--mono);color:var(--bg);flex:none}
  .kb-class{background:var(--ty)} .kb-struct{background:var(--enm)} .kb-enum{background:var(--emb)}
  .it .nm{white-space:nowrap;overflow:hidden;text-overflow:ellipsis}
  /* detail top bar: back button + inheritance row */
  .dtop{display:flex;align-items:center;gap:10px;flex-wrap:wrap;margin:0 0 14px}
  .back{flex:none;display:inline-flex;align-items:center;justify-content:center;width:30px;height:30px;background:var(--panel2);border:1px solid var(--border);border-radius:8px;color:var(--fg);text-decoration:none;font-size:16px}
  .back:hover{color:var(--acc);border-color:var(--acc)}
  .dtop .chain-row{margin:0}
  .loading{color:var(--mut);padding:24px 2px}
  /* toggles live in the gear popover */
  .tgl{display:inline-flex;align-items:center;gap:7px;padding:5px 11px 5px 8px;background:var(--panel2);border:1px solid var(--border);border-radius:8px;color:var(--mut);cursor:pointer;font-size:13px;font-weight:600;transition:color .1s,border-color .1s}
  .tgl .sw{position:relative;width:26px;height:15px;border-radius:8px;background:var(--border);flex:none;transition:background .12s}
  .tgl .sw::after{content:"";position:absolute;top:2px;left:2px;width:11px;height:11px;border-radius:50%;background:var(--bg);transition:left .12s}
  .tgl.on{color:var(--fg);border-color:var(--acc)}
  .tgl.on .sw{background:var(--acc)}
  .tgl.on .sw::after{left:13px}
  .tgl:hover{color:var(--fg);border-color:var(--mut)}
  main{flex:1;min-width:0;padding:18px}
  .site-foot{color:var(--mut);font-size:12px;line-height:1.6;padding:18px 2px 0;margin-top:22px;border-top:1px solid var(--border)}
  .site-foot a{color:var(--acc);text-decoration:none}
  .site-foot a:hover{text-decoration:underline}
  #home{background:var(--panel);border:1px solid var(--border);border-radius:10px;box-shadow:var(--shadow);padding:16px}
  #detail{padding-bottom:32px}
  .cls{background:var(--panel);border:1px solid var(--border);border-radius:10px;margin:0 0 16px;overflow:clip;box-shadow:var(--shadow)}
  .sig,.bd,.side{font-family:var(--mono);font-size:14.5px}
  .sig{padding:10px 16px;border-bottom:1px solid var(--border);background:var(--panel2);line-height:1.7}
  .sig .cn{font-weight:650}
  /* sticky class signature: stays under the sticky header + search bar */
  .bd{white-space:pre;overflow-x:auto;padding:12px 16px;margin:0;line-height:1.6;tab-size:4}
  /* class body: memory-map scale + borderless table (offset·size·type·name·align) */
  .cbody{padding:14px 16px;font:14px/1.75 var(--mono);overflow-x:auto}
  .cbody .map{display:flex;height:18px;border-radius:5px;overflow:hidden;min-width:220px}
  .cbody .map span{transition:opacity .1s}
  .cbody .capc{text-align:center;color:var(--mut);font-size:12.5px;margin:9px 0 14px}
  .cbody .capc b{color:var(--num);font-weight:700}
  .tbl{display:table;width:100%}
  .tr{display:table-row}
  .tr:hover .td{background:var(--hov)}
  .tr.hl .td{background:var(--hov)}
  .th,.td{display:table-cell;padding:2px 18px 2px 0;vertical-align:middle;white-space:nowrap}
  .th{color:var(--mut);font:600 11px/1 -apple-system,'Segoe UI',sans-serif;text-transform:uppercase;letter-spacing:.5px;padding-bottom:8px}
  .td.c-off{color:var(--fg)}
  .td.c-name{width:100%}
  .td.c-align{color:var(--fg)}
  .bar{display:inline-flex;align-items:center;justify-content:flex-start;height:16px;border-radius:3px;color:#08130f;font:700 10px/1 var(--mono);min-width:20px;padding:0 6px;white-space:nowrap}
  .abar{display:inline-block;height:8px;border-radius:2px;vertical-align:middle;margin-right:7px}
  body:not(.showpad) .padrow,body:not(.showpad) .pseg{display:none}
  /* side panel: refs / inheritance / datamap right of the code on wide screens */
  .side{display:flex;flex-direction:column;min-width:0}
  .refs,.chain,.dm{padding:12px 16px;border-top:1px solid var(--border)}
  .sec-h{display:flex;align-items:center;gap:8px;color:var(--mut);font-size:11px;font-weight:650;text-transform:uppercase;letter-spacing:.7px;margin-bottom:9px}
  .sec-h .cnt{font:700 11px/1 var(--mono);color:var(--fg);letter-spacing:0;text-transform:none}
  .chips{display:flex;flex-wrap:wrap;gap:6px}
  .chips .xtra{display:contents}
  .chips .xtra[hidden]{display:none}
  .chip{font-family:var(--mono);font-size:13.5px;font-weight:inherit;text-decoration:none;color:var(--ty);background:var(--bg);border:1px solid var(--border);border-radius:7px;padding:3px 10px;transition:border-color .1s,color .1s}
  .chip:hover{border-color:var(--acc);color:var(--acc)}
  .chip.more{color:var(--mut);background:transparent;border-style:dashed;cursor:pointer}
  .chip.more:hover{color:var(--acc);border-color:var(--acc)}
  .chip.cur{color:var(--enm);border-color:var(--enm)}
  .chain-row{display:flex;flex-wrap:wrap;align-items:center;gap:6px}
  .chain-row .arr{color:var(--mut);font-size:12px}
  .dm{overflow-x:auto}
  .dm2{display:grid;grid-template-columns:1fr 1fr;gap:0 24px}
  @media(max-width:720px){.dm2{grid-template-columns:1fr}}
  .dmg .k,.dmg .tgt,.dmg .fn{white-space:nowrap}
  .dm .dsub{color:var(--mut);font-size:12px;text-transform:uppercase;letter-spacing:.6px;margin:12px 0 5px}
  .ar{width:13px;height:13px;vertical-align:-2px}
  .dm .dsub:first-of-type{margin-top:2px}
  .dmg{display:grid;grid-template-columns:auto auto 1fr auto;gap:3px 10px;align-items:center;font-family:var(--mono);font-size:14.5px}
  .dmg .k{color:var(--mb)}
  .dmg .arr{color:var(--mut)}
  .dmg .fn{color:var(--fl)}
  .dmg .t{color:var(--mut);font-size:11px;text-align:right;white-space:nowrap}
  .dmg .mlink{color:var(--ty);text-decoration:none}
  .dmg .mlink:hover{color:var(--acc);text-decoration:underline}
  /* visible per-field share-link */
  a.fl{margin-left:6px;color:var(--mut);opacity:.5;text-decoration:none;font-weight:700;user-select:none;transition:opacity .1s,color .1s}
  .tr:hover a.fl{opacity:1}
  a.fl:hover{color:var(--acc)}
  a.fl.ok{color:var(--acc);opacity:1}
  .cbody .mb[id]{scroll-margin-top:140px}
  .cbody .mb:target{background:var(--flash);outline:1px solid var(--acc);border-radius:3px}
  .kw{color:var(--kw)} .ty{color:var(--ty)} .mb{color:var(--mb)} .cm{color:var(--cm)} .pad{color:var(--pad)}
  .oh{color:var(--num)}
  .padline{color:var(--pad)}
  body:not(.showpad) .padline{display:none}
  a.ty{text-decoration:none} a.ty:hover{text-decoration:underline}
  .tag{float:right;display:inline-flex;align-items:center;gap:6px;font:600 10.5px/1.2 -apple-system,'Segoe UI',sans-serif;
       letter-spacing:.5px;text-transform:uppercase;padding:4px 9px;border-radius:5px;border:0;margin-left:8px;
       color:var(--mut);background:var(--bg)}
  .tag b{font:700 11.5px/1 var(--mono);color:var(--num);letter-spacing:0}
  .tag.cp{background:color-mix(in srgb,var(--acc) 14%,transparent);color:var(--acc);cursor:pointer;transition:background .1s,color .1s;user-select:none}
  .tag.cp:hover{background:var(--acc);color:#fff}
  .tag.emb{background:color-mix(in srgb,var(--emb) 14%,transparent);color:var(--emb)}
  .tag.fl{background:color-mix(in srgb,var(--fl) 14%,transparent);color:var(--fl)}
  .meta{color:var(--meta)}
  /* phone / narrow: sidebar becomes a slide-in drawer */
  @media(max-width:820px){
    .top{padding:8px 12px;gap:10px}
    .brand{font-size:14px}.brand::before{margin-right:5px}
    .ver{display:none}
    #menu{display:inline-block}
    .sidebar{position:fixed;top:0;left:0;height:100dvh;z-index:30;width:min(290px,84vw);
             transform:translateX(-100%);transition:transform .2s ease;box-shadow:2px 0 20px rgba(0,0,0,.45)}
    body.side-open .sidebar{transform:none}
    body.side-open #scrim{display:block;position:fixed;inset:0;background:rgba(0,0,0,.5);z-index:25}
    main{padding:12px}
    #q{font-size:16px}
    .cbody .mb[id]{scroll-margin-top:12px}
  }
</style>
</head><body>
<div class="top">
  <button id="menu" title="filters">&#x2261;</button>
  <span class="brand">Source 2 Schema</span>
  <span class="sp"></span>
  <span class="ver">)"
	     << (gameVersion.empty() ? std::string() : "PatchVersion " + HtmlEscape(gameVersion))
	     << (serverVersion.empty() ? std::string()
	         : std::string(gameVersion.empty() ? "" : " &middot; ") + "ServerVersion " + HtmlEscape(serverVersion))
	     << R"(</span>
  <button id="pad" class="tgl" title="show padding fields"><span class="sw"></span>padding</button>
  <button id="hex" class="tgl" title="show all numbers as hex"><span class="sw"></span>hex</button>
  <nav id="tabs" title="platform"></nav>
</div>
<div class="app">
  <aside class="sidebar">
    <div id="qwrap"><div class="qhint">name &middot; field &middot; <b>0x1c0</b>/<b>448</b> offset</div><input id="q" placeholder="search&hellip;" autocomplete="off" spellcheck="false"><div id="sugg" hidden></div></div>
    <div class="sortwrap"><span class="sortl">sort</span><select id="sort">
      <option value="name">A → Z</option>
      <option value="dep">inheritance depth</option>
      <option value="nf">field count</option>
      <option value="ni">inputs</option>
      <option value="no">outputs</option>
      <option value="nk">keyfields</option>
    </select></div>
    <div class="secs">
      <div class="sec"><div class="sec-t">libraries</div><div id="libs"></div></div>
      <div class="sec"><div class="sec-t">kinds</div><div id="kinds"></div></div>
    </div>
  </aside>
  <div id="scrim"></div>
  <main>
    <div id="home"></div>
    <div id="detail" hidden></div>
    <footer class="site-foot">&copy; <a href="https://github.com/boeing666/source2-dumper">boeing666/source2-dumper</a>
      &middot; schema data from Counter-Strike 2 (Valve) &middot;
      site &amp; dumps licensed <a href="https://creativecommons.org/licenses/by/4.0/">CC BY 4.0</a> &mdash; reuse freely with attribution and a link back.</footer>
  </main>
</div>
)";

	static const std::vector<std::string> kEmpty;
	auto refsOf = [&](const char* name) -> const std::vector<std::string>& {
		auto it = refs.find(name);
		return it != refs.end() ? it->second : kEmpty;
	};

	// one HTML fragment per type, loaded on demand by the shell (keeps the page tiny)
	const fs::path cdir = outDir / PLATFORM_NAME / "c";
	fs::create_directories(cdir);
	auto jstr = [](std::string_view s) {
		std::string o = "\"";
		for (char c : s) {
			if (c == '"' || c == '\\') {
				o += '\\';
			}
			o += c;
		}
		return o + "\"";
	};

	// scope-priority dedup (schema_dumper) keeps the authoritative version of shared names,
	// so every known name is a safe cross-link target.
	const std::unordered_set<std::string>& linkable = known;

	// fblob = original-case field names, space-joined, index-aligned with offsetBlob (same field order)
	auto joinName = [](std::string& b, const char* s) {
		if (!s || !*s) {
			return;
		}
		if (!b.empty()) {
			b += ' ';
		}
		b += s;
	};
	// T: safe -> [name, kind, module, entity, fblob, nFields, inheritDepth, nIn, nOut, nKey, offsetBlob]
	page << "<script>\nconst T={";
	bool firstT = true;
	auto emitT = [&](const std::string& safe, const char* name, const char* kind, const std::string& mod, int entity,
	                 const std::string& fblob, int nf, int dep, int ni, int no, int nk, const std::string& oblob) {
		page << (firstT ? "" : ",") << jstr(safe) << ":[" << jstr(name) << ",\"" << kind << "\","
		     << jstr(mod) << "," << entity << "," << jstr(fblob) << "," << nf << "," << dep << "," << ni << "," << no << "," << nk
		     << "," << jstr(oblob) << "]";
		firstT = false;
	};
	for (const Module& m : modules) {
		for (CSchemaEnumInfo* e : m.enums) {
			const std::string safe = SafeName(e->m_pszName);
			std::ofstream(cdir / (safe + ".html"), std::ios::trunc) << EnumHtml(e, refsOf(e->m_pszName));
			std::string fblob;
			for (uint16 i = 0; i < e->m_nEnumeratorCount && e->m_pEnumerators; ++i) {
				joinName(fblob, e->m_pEnumerators[i].m_pszName);
			}
			emitT(safe, e->m_pszName, "enum", m.scope, 0, fblob, e->m_nEnumeratorCount, 0, 0, 0, 0, "");
		}
		for (const ClassRec& rec : m.classes) {
			const std::string safe = SafeName(rec.info->m_pszName);
			std::ofstream(cdir / (safe + ".html"), std::ios::trunc)
			    << ClassHtml(rec.info, rec.fields, linkable, refsOf(rec.info->m_pszName), rec.embedded);
			std::string fblob, oblob;
			for (const SchemaClassFieldData_t* f : rec.fields) {
				joinName(fblob, f->m_pszName);
				if (!oblob.empty()) {
					oblob += ' ';
				}
				oblob += std::format("0x{:x}", f->m_nSingleInheritanceOffset);
			}
			int ni, no, nk;
			DatamapCounts(rec.info, ni, no, nk);
			emitT(safe, rec.info->m_pszName, IsStructName(rec.info->m_pszName) ? "struct" : "class",
			      m.scope, rec.embedded ? 0 : 1, fblob, (int)rec.fields.size(), InheritDepth(rec.info), ni, no, nk, oblob);
		}
	}
	page << "};\n";

	// module order for the home index (types grouped by their module)
	page << "const MODS=[";
	for (size_t i = 0; i < modules.size(); ++i) {
		page << (i ? "," : "") << jstr(modules[i].scope);
	}
	page << "];\n</script>\n";

	page << R"JS(<script>
const PAGE=")JS" << PLATFORM_NAME << R"JS(";
fetch("platforms.json").then(r=>r.json()).then(ps=>{
  const t=document.getElementById("tabs");
  ps.forEach(p=>{const a=document.createElement("a");a.href=p+".html";a.textContent=p;if(p===PAGE)a.className="cur";t.appendChild(a);});
}).catch(()=>{});

const home=document.getElementById("home"),detail=document.getElementById("detail"),q=document.getElementById("q"),sugg=document.getElementById("sugg");
function esc(s){return s.replace(/&/g,"&amp;").replace(/</g,"&lt;").replace(/>/g,"&gt;");}

// colored letter badge per kind (C/S/E), letter centered
function badge(k){return '<span class="kb kb-'+k+'">'+k[0].toUpperCase()+'</span>';}

// ---- home: every type grouped by module, columns, filterable, sortable ----
// entry = [safe,name,kind,fblob, nf,dep,ni,no,nk]
const byMod={};
for(const safe in T){const m=T[safe];(byMod[m[2]]=byMod[m[2]]||[]).push([safe,m[0],m[1],m[4]||"",m[5],m[6],m[7],m[8],m[9],m[10]||""]);}
// offset query: "0x1c0" or "448" -> normalized "0x1c0", else null
function offQ(s){s=s.trim().toLowerCase();if(/^0x[0-9a-f]+$/.test(s))return s;if(/^\d+$/.test(s))return "0x"+parseInt(s,10).toString(16);return null;}
const hasOff=(oblob,q)=>(" "+oblob+" ").includes(" "+q+" ");
const SORTIDX={name:1,dep:5,nf:4,ni:6,no:7,nk:8};
let sortKey="name";
const sortSel=document.getElementById("sort");
function sortArr(arr){
  if(sortKey==="name")return arr.sort((a,b)=>a[1]<b[1]?-1:a[1]>b[1]?1:0);
  const i=SORTIDX[sortKey];
  return arr.sort((a,b)=>(b[i]||0)-(a[i]||0)||(a[1]<b[1]?-1:1)); // metric desc, then name
}
function buildHome(){
  let s="";
  for(const m of MODS){
    const arr=byMod[m];if(!arr)continue;
    sortArr(arr);
    s+='<div class="grp" data-m="'+esc(m)+'"><div class="grp-h">'+esc(m)+' <span class="c">'+arr.length+'</span></div><div class="cols">'
      +arr.map(e=>{const[safe,name,kind]=e;const mv=sortKey!=="name"?' <span class="mv">'+(e[SORTIDX[sortKey]]||0)+'</span>':'';
        return '<a class="it" href="#'+safe+'" data-k="'+kind+'" data-n="'+esc(name).toLowerCase()+'" data-f="'+esc((e[3]||"").toLowerCase())+'" data-o="'+esc(e[9])+'"><span class="kb kb-'+kind+'">'+kind[0].toUpperCase()+'</span><span class="nm">'+esc(name)+'</span>'+mv+'</a>';}).join("")
      +'</div></div>';
  }
  home.innerHTML=s;applyHome();
}
sortSel.onchange=()=>{sortKey=sortSel.value;buildHome();};
// sidebar filters: libraries + kinds as list rows (checkbox/badge + count), multi-select
const libSel=new Set(),kindSel=new Set();
document.getElementById("libs").innerHTML=MODS.filter(m=>byMod[m]).map(m=>
  `<div class="frow" data-m="${esc(m)}"><span class="ck"></span><span class="s-n">${esc(m)}</span><span class="ct">${byMod[m].length}</span></div>`).join("");
const kcount={class:0,struct:0,enum:0};for(const s in T)kcount[T[s][1]]++;
document.getElementById("kinds").innerHTML=[["class","classes"],["struct","structs"],["enum","enums"]].map(([k,l])=>
  `<div class="frow" data-kind="${k}">${badge(k)}<span class="s-n">${l}</span><span class="ct">${kcount[k]}</span></div>`).join("");
document.querySelector(".secs").addEventListener("click",e=>{const r=e.target.closest(".frow");if(!r)return;
  if(r.dataset.kind){const k=r.dataset.kind;kindSel.has(k)?kindSel.delete(k):kindSel.add(k);r.classList.toggle("on",kindSel.has(k));}
  else{const m=r.dataset.m;libSel.has(m)?libSel.delete(m):libSel.add(m);r.classList.toggle("on",libSel.has(m));}
  applyHome();renderSugg();});
buildHome();  // after libSel/kindSel exist (applyHome, called inside, reads them)

// mobile sidebar drawer
const menu=document.getElementById("menu"),scrim=document.getElementById("scrim");
menu.onclick=()=>document.body.classList.toggle("side-open");
scrim.onclick=()=>document.body.classList.remove("side-open");

function applyHome(){
  const s=q.value.toLowerCase(),oq=offQ(s);
  if(!detail.hidden){history.pushState("","",location.pathname);showHome();}
  home.querySelectorAll(".grp").forEach(g=>{
    const libOk=libSel.size===0||libSel.has(g.dataset.m);
    let any=false;
    g.querySelectorAll(".it").forEach(a=>{
      // numeric/hex query -> match only fields by offset; else name/field text
      const q2ok=oq?hasOff(a.dataset.o,oq):(!s||a.dataset.n.includes(s)||a.dataset.f.includes(s));
      const show=libOk&&(kindSel.size===0||kindSel.has(a.dataset.k))&&q2ok;
      a.style.display=show?"":"none";if(show)any=true;});
    g.style.display=any?"":"none";
  });
}
// autocomplete dropdown: type-name matches first, then field-name matches
const ENTRIES=Object.entries(T);   // [safe,[name,kind,module,entity,fblob]]
let pick=-1;
function renderSugg(){
  const s=q.value.trim().toLowerCase();
  if(!s){sugg.hidden=true;sugg.innerHTML="";pick=-1;return;}
  const oq=offQ(s);
  if(oq){ // offset mode: classes that have a field at this offset — show that field's name
    const hits=[];
    for(const [safe,m] of ENTRIES){
      if(libSel.size&&!libSel.has(m[2]))continue;
      if(kindSel.size&&!kindSel.has(m[1]))continue;
      const i=(m[10]||"").split(" ").indexOf(oq);
      if(i>=0)hits.push([safe,m,(m[4]||"").split(" ")[i]||oq]);
    }
    sugg.innerHTML=hits.slice(0,60).map(([safe,m,fld])=>
      `<a href="#${safe}/@${oq}" class="s-it">${badge(m[1])}<span class="s-n">${esc(m[0])} <span class="s-f">&middot; ${esc(fld)}</span></span><span class="s-m">${esc(m[2])}</span></a>`).join("");
    sugg.hidden=!hits.length;pick=-1;return;
  }
  const names=[],flds=[];
  for(const [safe,m] of ENTRIES){
    if(libSel.size&&!libSel.has(m[2]))continue;
    if(kindSel.size&&!kindSel.has(m[1]))continue;
    const i=m[0].toLowerCase().indexOf(s);
    if(i>=0){names.push([i,m[0].length,safe,m]);continue;}
    const toks=(m[4]||"").split(" ");const li=toks.findIndex(t=>t.toLowerCase().includes(s));
    if(li>=0)flds.push([safe,m,toks[li]]);
  }
  names.sort((a,b)=>a[0]-b[0]||a[1]-b[1]||(a[3][0]<b[3][0]?-1:1));
  let html=names.slice(0,50).map(([,,safe,m])=>
    `<a href="#${safe}" class="s-it">${badge(m[1])}<span class="s-n">${esc(m[0])}</span><span class="s-m">${esc(m[2])}</span></a>`).join("");
  if(names.length<50&&flds.length)
    html+=flds.slice(0,50-names.length).map(([safe,m,tok])=>
      `<a href="#${safe}/~${tok}" class="s-it">${badge(m[1])}<span class="s-n">${esc(m[0])} <span class="s-f">&middot; ${esc(tok)}</span></span><span class="s-m">${esc(m[2])}</span></a>`).join("");
  sugg.innerHTML=html;sugg.hidden=!html;pick=-1;
}
q.oninput=()=>{applyHome();renderSugg();};
q.onkeydown=e=>{
  const items=[...sugg.querySelectorAll(".s-it")];
  if(e.key==="ArrowDown"&&items.length){e.preventDefault();pick=(pick+1)%items.length;}
  else if(e.key==="ArrowUp"&&items.length){e.preventDefault();pick=(pick-1+items.length)%items.length;}
  else if(e.key==="Enter"&&items.length){e.preventDefault();(items[pick]||items[0]).click();return;}
  else if(e.key==="Escape"){sugg.hidden=true;return;}
  else return;
  items.forEach((it,i)=>it.classList.toggle("sel",i===pick));
  if(items[pick])items[pick].scrollIntoView({block:"nearest"});
};
document.addEventListener("click",e=>{if(!e.target.closest("#qwrap"))sugg.hidden=true;});

// ---- open a class: fetch its fragment into the detail pane ----
let cur=null;
function applyHexTo(root){ if(hb.classList.contains("on")) root.querySelectorAll(".nv").forEach(el=>el.textContent=el.dataset.h); }
function flashField(el){ // highlight the whole row like a hover
  const r=el&&el.closest(".tr"); if(!r)return;
  document.querySelectorAll(".tr.hl").forEach(x=>x.classList.remove("hl"));
  r.classList.add("hl");
}
function openClass(safe,field){
  if(!T[safe]){showHome();return;}
  cur=safe;home.hidden=true;detail.hidden=false;document.body.classList.remove("side-open");
  detail.innerHTML='<div class="loading">loading '+safe+'…</div>';
  fetch(PAGE+"/c/"+encodeURIComponent(safe)+".html").then(r=>r.ok?r.text():Promise.reject()).then(html=>{
    if(cur!==safe)return;
    detail.innerHTML=html;   // fragment carries its own back button + inheritance row
    applyHexTo(detail);
    if(field){
      let el;
      if(field[0]==="@"){ // jump to the field at this offset (data-h hex on the offset cell)
        const oq=field.slice(1),cell=[...detail.querySelectorAll(".c-off .nv")].find(n=>n.dataset.h.toLowerCase()===oq);
        el=cell&&cell.closest(".tr")&&cell.closest(".tr").querySelector(".mb[id]");
      }else if(field[0]==="~"){const fq=field.slice(1),ms=[...detail.querySelectorAll(".cbody .mb[id]")];
        el=ms.find(m=>m.textContent.toLowerCase()===fq)||ms.find(m=>m.textContent.toLowerCase().includes(fq));}
      else el=document.getElementById(field);
      if(el){el.scrollIntoView({block:"center"});flashField(el);return;}
    }
    window.scrollTo(0,0);
  }).catch(()=>{
    if(cur!==safe)return;
    const local=location.protocol==="file:";
    detail.innerHTML='<div class="dtop"><a class="back" href="#">&larr;</a></div><div class="loading">'
      +(local?"Class pages load over HTTP — the browser blocks <code>fetch</code> on <code>file://</code>.<br><br>"
        +"Run a server in this folder, then open over http:<br><br>"
        +"<code>python -m http.server</code> &nbsp;&rarr;&nbsp; <code>http://localhost:8000/"+PAGE+".html</code>"
        :"failed to load "+safe)+"</div>";
  });
}
function showHome(){cur=null;detail.hidden=true;home.hidden=false;}

function route(){
  let h=decodeURIComponent(location.hash.slice(1));
  if(!h){showHome();return;}
  let field=null;
  const slash=h.indexOf("/");
  if(slash>=0){field=h.slice(slash+1);h=h.slice(0,slash);}
  if(T[h])openClass(h,field); else showHome();
}
window.addEventListener("hashchange",route);

// ---- navigation: any #<safe> link opens that class; field links (#cls/field) too ----
document.addEventListener("click",e=>{
  const a=e.target.closest('a[href^="#"]'); if(!a) return;
  if(a.classList.contains("fl")){e.preventDefault();cpField(a);return;} // copy link, don't navigate
  if(a.classList.contains("back")){e.preventDefault();history.pushState("","",location.pathname);showHome();return;}
  const t=a.getAttribute("href").slice(1);
  const base=t.split("/")[0];
  if(t===""||T[base]){e.preventDefault();sugg.hidden=true;location.hash=t;if(location.hash.slice(1)===t)route();}
});

function copyFB(b,txt){navigator.clipboard.writeText(txt).then(()=>{const t=b.textContent;b.textContent="copied!";setTimeout(()=>{b.textContent=t;},900);});}
function cpField(a){navigator.clipboard.writeText(location.origin+location.pathname+a.getAttribute("href"));a.classList.add("ok");setTimeout(()=>a.classList.remove("ok"),700);
  const r=a.closest(".tr");if(r)flashField(r.querySelector(".mb[id]"));}
function cardRows(card){return [...card.querySelectorAll(".tbl .tr")].filter(r=>!r.classList.contains("thr")&&!r.classList.contains("padrow"));}
function copySchema(b){
  const card=b.closest(".cls");
  const name=card.querySelector(".sig .cn").textContent,kind=card.querySelector(".sig .kw").textContent,par=card.querySelector(".sig a.ty");
  let out=kind+" "+name+(par?" : public "+par.textContent:"")+"\n{\npublic:\n\tDECLARE_SCHEMA_CLASS("+name+")\n\n";
  cardRows(card).forEach(r=>{const ty=r.querySelector(".c-type"),mb=r.querySelector(".c-name .mb");if(!ty||!mb||!ty.textContent.trim())return;out+="\tSCHEMA_FIELD("+ty.textContent.trim()+", "+mb.textContent+")\n";});
  copyFB(b,out+"};");
}
function copyFields(b){
  const card=b.closest(".cls"),lines=[];
  cardRows(card).forEach(r=>{const ty=r.querySelector(".c-type"),mb=r.querySelector(".c-name .mb");if(!mb)return;const t=(ty&&ty.textContent.trim()?ty.textContent.trim()+" ":"")+mb.textContent+";";lines.push("\t"+t);});
  copyFB(b,lines.join("\n"));
}
function tglMore(b){
  let x=b.parentElement.querySelector(".xtra");
  if(!x){x=document.createElement("span");x.className="xtra";
    x.innerHTML=b.dataset.more.split(",").map(n=>`<a class="chip" href="#${n.replace(/[^A-Za-z0-9_.-]/g,"_")}">${n}</a>`).join("");
    b.parentElement.insertBefore(x,b);b.dataset.n=b.textContent.replace(/\D/g,"");b.textContent="hide";return;}
  if(x.hasAttribute("hidden")){x.removeAttribute("hidden");b.textContent="hide";}
  else{x.setAttribute("hidden","");b.textContent="+"+b.dataset.n+" more";}
}

const pb=document.getElementById("pad");
function setPad(v){document.body.classList.toggle("showpad",v);pb.classList.toggle("on",v);localStorage.setItem("showpad",v?"1":"0");}
pb.onclick=()=>setPad(!document.body.classList.contains("showpad"));
setPad(localStorage.getItem("showpad")==="1");

const hb=document.getElementById("hex");
function setHex(v){hb.classList.toggle("on",v);localStorage.setItem("hexmode",v?"1":"0");
  document.querySelectorAll(".nv").forEach(el=>el.textContent=v?el.dataset.h:parseInt(el.dataset.h,16));}
hb.onclick=()=>setHex(!hb.classList.contains("on"));
if(localStorage.getItem("hexmode")==="1")hb.classList.add("on");

route(); // open the class from the URL hash, else show the tree
</script>
</body></html>
)JS";

	// merge this platform into platforms.json (keeps tabs for both when win64/linux dumped side by side)
	{
		std::vector<std::string> plats;
		if (std::ifstream in(outDir / "platforms.json"); in) {
			std::string s((std::istreambuf_iterator<char>(in)), {});
			for (size_t i = 0; (i = s.find('"', i)) != std::string::npos;) {
				size_t j = s.find('"', i + 1);
				if (j == std::string::npos) {
					break;
				}
				plats.push_back(s.substr(i + 1, j - i - 1));
				i = j + 1;
			}
		}
		if (std::find(plats.begin(), plats.end(), PLATFORM_NAME) == plats.end()) {
			plats.emplace_back(PLATFORM_NAME);
		}
		std::sort(plats.begin(), plats.end());
		std::ofstream out(outDir / "platforms.json", std::ios::trunc);
		out << "[";
		for (size_t i = 0; i < plats.size(); ++i) {
			out << (i ? "," : "") << "\"" << plats[i] << "\"";
		}
		out << "]\n";
	}

	std::ofstream(outDir / "index.html", std::ios::trunc) << R"(<!doctype html><meta charset="utf-8"><title>Source 2 Schema</title>
<script>fetch("platforms.json").then(r=>r.json()).then(p=>location.replace(p[0]+".html")).catch(()=>location.replace(")"
		<< PLATFORM_NAME << R"(.html"));</script>
<p style="font:14px sans-serif;padding:20px">Loading schema&hellip;</p>
)";
}

} // namespace schema
