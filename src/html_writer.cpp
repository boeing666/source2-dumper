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
		// extras hidden until the toggle button is clicked (see tglMore() in the page script)
		s += "<span class=\"xtra\" hidden>";
		for (size_t i = kMaxRefs; i < n; ++i) {
			s += chip(referencedBy[i]);
		}
		s += "</span>";
		s += std::format("<button class=\"chip more\" data-n=\"{}\" onclick=\"tglMore(this)\">+{} more</button>",
		                 n - kMaxRefs, n - kMaxRefs);
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
		decl += "<span class=\"kw\">public</span> <a class=\"ty\" href=\"#" + SafeName(bc.m_pClass->m_pszName) + "\">"
		      + HtmlEscape(bc.m_pClass->m_pszName) + "</a>";
		if (bc.m_nOffset) {
			decl += "<span class=\"cm\">/*" + Num(bc.m_nOffset) + "*/</span>";
		}
	}
	if (auto m = MetaTags(c->m_nStaticMetadataCount, c->m_pStaticMetadata); !m.empty()) {
		decl += " <span class=\"meta\">{" + HtmlEscape(JoinTags(m)) + "}</span>";
	}

	std::string s;

	// body as a table: declaration cell + right-pinned numbers column (offset hex/dec, size, align).
	// table-cells keep the txt export sane: innerText renders cells as tabs, rows as newlines.
	auto numCell = [](const std::string& off, const std::string& size, const std::string& al) {
		// real spaces between spans keep the numbers separated in the txt export (innerText)
		return "<span class=\"n\"><span class=\"c-off\">" + off + "</span> <span class=\"c-sz\">" + size
		     + "</span> <span class=\"c-al\">" + al + "</span></span>";
	};
	auto row = [&](const std::string& cls, const std::string& decl, const std::string& nums) {
		s += "<span class=\"r" + cls + "\"><span class=\"d\">" + decl + "</span>" + nums + "</span>";
	};

	s += "<div class=\"bd\"><span class=\"btbl\">";
	row(" hdr", "{", numCell("offset", "size", "align"));
	if (!isStruct) {
		row("", "<span class=\"kw\">public</span>:", "<span class=\"n\"></span>");
	}
	int cursor = 0;
	auto pad = [&](int from, int to) {
		if (to > from) {
			row(" padline",
			    std::format("    <span class=\"pad\">char _pad_{:04X}[", from) + Num(to - from) + "];</span>",
			    numCell(Num(from), Num(to - from), ""));
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

		const std::string fn = HtmlEscape(f->m_pszName ? f->m_pszName : "field");
		const std::string mid = SafeName(std::string(name) + "::" + (f->m_pszName ? f->m_pszName : "field"));
		std::string meta;
		if (auto tags = MetaTags(f->m_nStaticMetadataCount, f->m_pStaticMetadata); !tags.empty()) {
			meta = " <span class=\"meta\">" + HtmlEscape(JoinTags(tags)) + "</span>";
		}

		// share-link button: copies a deep link (URL#Class::field) to this field
		const std::string flink = " <a class=\"fl\" href=\"#" + mid + "\" onclick=\"cpField(this);return false\" title=\"copy link to field\">&sect;</a>";

		int bits;
		if (FieldBits(f->m_pType, bits)) {
			row("",
			    "    <span class=\"ty\">" + std::string(BitUnderlying(bits)) + "</span> <span class=\"mb\" id=\"" + mid + "\">" + fn
			      + "</span>: <span class=\"oh\">" + std::to_string(bits) + "</span>;" + meta + flink,
			    numCell(Num(off), "-", "-"));
		} else {
			row("",
			    "    <span class=\"ty\">" + LinkType(TypeName(f->m_pType), known) + "</span> <span class=\"mb\" id=\"" + mid + "\">" + fn + "</span>;" + meta + flink,
			    numCell(Num(off), Num(size), align != 0xFF ? Num(align) : "-"));
		}
		cursor = std::max(cursor, off + size);
	}
	pad(cursor, c->m_nSize);
	s += "</span>};</div>";

	// refs / inheritance / datamap live in a side panel next to the code body
	std::string side = RefsHtml(referencedBy);

	// inheritance chain: root -> ... -> this
	std::vector<CSchemaClassInfo*> chain;
	for (CSchemaClassInfo* p = c; p && chain.size() < 64;) {
		chain.push_back(p);
		p = (p->m_nBaseClassCount && p->m_pBaseClasses && p->m_pBaseClasses[0].m_pClass)
		    ? p->m_pBaseClasses[0].m_pClass : nullptr;
	}
	if (chain.size() > 1) {
		side += "<div class=\"chain\"><div class=\"sec-h\">inheritance <span class=\"cnt\">"
		      + std::to_string(chain.size()) + "</span></div><div class=\"chain-row\">";
		for (size_t i = chain.size(); i-- > 0;) {
			if (i + 1 != chain.size()) {
				side += "<span class=\"arr\">&rarr;</span>";
			}
			CSchemaClassInfo* p = chain[i];
			if (p == c) {
				side += "<span class=\"chip cur\">" + HtmlEscape(p->m_pszName) + "</span>";
			} else {
				side += "<a class=\"chip\" href=\"#" + SafeName(p->m_pszName) + "\">" + HtmlEscape(p->m_pszName) + "</a>";
			}
		}
		side += "</div></div>";
	}

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
			                     : "<span class=\"arr\">&rarr;</span><span class=\"tgt\">" + target + "</span>";
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
			auto sub = [&](const char* title, const std::string& body) {
				if (!body.empty()) {
					side += std::string("<div class=\"dsub\">") + title + "</div><div class=\"dmg\">" + body + "</div>";
				}
			};
			sub("inputs", inputs);
			sub("outputs", outputs);
			sub("keyfields", keys);
			sub("fields", data);
			side += "</div>";
		}
	}

	std::string out = "<div class=\"cls\" id=\"" + SafeName(name) + "\" data-k=\"" + (isStruct ? "struct" : "class") + "\">";
	if (!side.empty()) {
		out += "<div class=\"sig\">" + badgesL + decl + "</div><div class=\"sig sigb\">" + badgesR + "</div>";
	} else {
		out += "<div class=\"sig\">" + badgesL + badgesR + decl + "</div>";
	}
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

	std::string s = "<div class=\"cls\" id=\"" + SafeName(name) + "\" data-k=\"enum\">";
	if (!refs.empty()) {
		s += "<div class=\"sig\">" + badgesL + decl + "</div><div class=\"sig sigb\">" + badgesR + "</div>";
	} else {
		s += "<div class=\"sig\">" + badgesL + badgesR + decl + "</div>";
	}
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
                       const std::string& gameVersion, const std::string& dumpDate) {
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
        --mono:ui-monospace,'Cascadia Code',Consolas,'JetBrains Mono',monospace;--shadow:0 1px 3px rgba(0,0,0,.25)}
  @media(prefers-color-scheme:light){:root{--bg:#f6f7f9;--panel:#fff;--panel2:#f0f1f4;--border:#dfe2e8;--fg:#1f2328;--mut:#6e7781;--acc:#0e7569;
        --kw:#0550ae;--ty:#0e7569;--mb:#0a3069;--cm:#1a7f37;--pad:#a5aab4;--num:#0550ae;--emb:#8250df;--meta:#a31515;--fl:#7d6520;--enm:#b45309;--flash:#fff8c5;
        --zeb:#f4f5f8;--hov:#e2efe9;
        --shadow:0 1px 3px rgba(31,35,40,.08)}}
  *{box-sizing:border-box}
  body{margin:0;font:15px/1.55 -apple-system,'Segoe UI',Roboto,sans-serif;background:var(--bg);color:var(--fg)}
  ::-webkit-scrollbar{width:10px;height:10px}
  ::-webkit-scrollbar-thumb{background:var(--border);border-radius:5px;border:2px solid var(--bg)}
  ::-webkit-scrollbar-thumb:hover{background:var(--mut)}
  header{position:sticky;top:0;z-index:6;background:color-mix(in srgb,var(--bg) 86%,transparent);backdrop-filter:blur(10px);
         border-bottom:1px solid var(--border);padding:10px 18px;display:flex;gap:16px;align-items:center;flex-wrap:wrap}
  header h1{font-size:15px;margin:0;font-weight:650;letter-spacing:.2px}
  header h1::before{content:"{;}";color:var(--acc);font-family:var(--mono);margin-right:8px;font-weight:700}
  .ver{color:var(--mut);font-size:12px;font-family:var(--mono);white-space:nowrap}
  /* inheritance tree overlay */
  #tree{position:fixed;inset:0;z-index:20;background:rgba(0,0,0,.5);display:flex;justify-content:center;align-items:flex-start;padding:6vh 16px}
  #tree[hidden]{display:none}
  .tree-box{background:var(--panel);border:1px solid var(--border);border-radius:12px;box-shadow:0 12px 40px rgba(0,0,0,.4);width:min(720px,100%);max-height:88vh;display:flex;flex-direction:column;overflow:hidden}
  .tree-h{display:flex;gap:10px;padding:12px;border-bottom:1px solid var(--border)}
  .tree-h input{flex:1;padding:8px 11px;background:var(--panel2);border:0;border-radius:7px;color:var(--fg);font-size:13px}
  .tree-h input:focus{outline:none;box-shadow:inset 0 0 0 1px var(--acc)}
  .tree-h button{padding:8px 14px;background:var(--panel2);border:0;border-radius:7px;color:var(--fg);cursor:pointer;font-size:13px;font-weight:600}
  .tree-h button:hover{background:var(--acc);color:#fff}
  #treeBody,#treeFlat{overflow:auto;padding:10px 14px;font-family:var(--mono);font-size:13px}
  .tn-h{display:flex;align-items:center;gap:6px;padding:2px 0;border-radius:5px}
  .tn-h:hover{background:var(--panel2)}
  .tn-t{width:1.1em;flex:none;color:var(--mut);cursor:pointer;user-select:none;text-align:center}
  .tn-n{color:var(--ty);text-decoration:none}
  .tn-n:hover{color:var(--acc);text-decoration:underline}
  .tn-c{color:var(--mut);font-size:11px}
  .tn-k{margin-left:14px;border-left:1px solid var(--border);padding-left:8px}
  .tn:not(.open)>.tn-k{display:none}
  #treeFlat .flat{display:block;padding:3px 4px}
  header button{padding:6px 12px;background:color-mix(in srgb,var(--acc) 14%,transparent);border:0;border-radius:7px;color:var(--acc);cursor:pointer;font-size:13px;font-weight:600;transition:background .1s,color .1s}
  header button:hover{background:var(--acc);color:#fff}
  .seg{display:flex;gap:8px}
  .tgl{display:inline-flex;align-items:center;gap:7px;padding:5px 11px 5px 8px;background:var(--panel2);border:1px solid var(--border);border-radius:8px;color:var(--mut);cursor:pointer;font-size:12.5px;font-weight:600;transition:color .1s,border-color .1s}
  .tgl .sw{position:relative;width:26px;height:15px;border-radius:8px;background:var(--border);flex:none;transition:background .12s}
  .tgl .sw::after{content:"";position:absolute;top:2px;left:2px;width:11px;height:11px;border-radius:50%;background:var(--bg);transition:left .12s}
  .tgl.on{color:var(--fg);border-color:var(--acc)}
  .tgl.on .sw{background:var(--acc)}
  .tgl.on .sw::after{left:13px}
  .tgl:hover{color:var(--fg);border-color:var(--mut)}
  .tgl:hover .sw{background:var(--mut)}
  .tgl.on:hover{border-color:var(--acc)}
  .tgl.on:hover .sw{background:var(--acc)}
  #tabs a{color:var(--mut);text-decoration:none;padding:5px 12px;background:var(--panel2);border-radius:7px;margin-right:6px;font-size:13px}
  #tabs a:hover{color:var(--fg)}
  #tabs a.cur{background:var(--acc);color:#fff}
  .hint{color:var(--mut);font-size:13px;margin-left:auto}
  .wrap{display:flex;align-items:flex-start}
  #toc{position:sticky;top:52px;align-self:flex-start;width:256px;max-height:calc(100vh - 52px);overflow:auto;padding:12px;border-right:1px solid var(--border);font-size:13px}
  #toc input{width:100%;padding:8px 11px;margin-bottom:8px;background:var(--panel2);border:0;border-radius:7px;color:var(--fg);font-size:13px}
  #toc input::placeholder{color:var(--mut)}
  #toc input:focus{outline:none;box-shadow:inset 0 0 0 1px var(--acc)}
  #toc .lib{margin-bottom:2px}
  #toc a{display:flex;justify-content:space-between;gap:8px;color:var(--fg);text-decoration:none;padding:4px 8px;border-radius:6px;font-family:var(--mono);font-size:12.5px}
  #toc a:hover{background:var(--panel2)}
  #toc a span{color:var(--mut)}
  #toc a.active{background:var(--acc);color:#fff}
  #toc a.active span{color:#fff}
  #toc a.lib-h{font-weight:600}
  #toc a.sub{position:relative;margin-left:14px;padding-left:20px;font-size:12px;color:var(--mut)}
  #toc a.sub::before{content:"\2514";position:absolute;left:6px;color:var(--border);font-size:11px}
  #toc a.sub:hover{color:var(--fg)}
  #toc a.sub.active{color:#fff}
  #toc a.sub.active::before{color:#fff}
  #toc .clear{display:none;width:100%;margin-bottom:8px;padding:7px 11px;background:color-mix(in srgb,var(--acc) 14%,transparent);border:0;border-radius:7px;color:var(--acc);cursor:pointer;font-size:13px;font-weight:600;transition:background .1s,color .1s}
  #toc .clear:hover{background:var(--acc);color:#fff}
  #toc .clear.on{display:block}
  main{flex:1;min-width:0;padding:0 20px 60vh}
  h2{position:sticky;top:52px;z-index:4;font:650 16px/1.4 var(--mono);margin:26px 0 12px;padding:10px 2px 8px;
     background:var(--bg);border-bottom:1px solid var(--border)}
  h2 span{color:var(--mut);font-weight:400;font-size:12.5px;margin-left:8px}
  /* content-visibility: skip layout/paint of off-screen cards (huge speedup on 4000+ cards; Ctrl-F still works) */
  .cls{background:var(--panel);border:1px solid var(--border);border-radius:10px;margin:0 0 16px;overflow:clip;scroll-margin-top:96px;box-shadow:var(--shadow);content-visibility:auto;contain-intrinsic-size:auto 360px}
  .cls:target{outline:2px solid var(--acc)}
  .sig,.bd,.side{font-family:var(--mono);font-size:13.5px}
  .sig{padding:10px 16px;border-bottom:1px solid var(--border);background:var(--panel2);line-height:1.7}
  .sig .cn{font-weight:650}
  /* sticky class signature: stays under the sticky library header (h2 ~41px tall @ top:52) */
  .sig:not(.sigb){position:sticky;top:93px;z-index:3}
  .bd{white-space:pre;overflow-x:auto;padding:12px 16px;margin:0;line-height:1.6;tab-size:4}
  /* field table: declaration cell + numbers pinned right (survive horizontal scroll of long types) */
  .btbl{display:table;min-width:100%}
  .bd .r{display:table-row}
  .bd .r>.d{display:table-cell;white-space:pre;padding-right:24px}
  .bd .r>.n{display:table-cell;white-space:nowrap;text-align:right;position:sticky;right:0;background:var(--panel);font-size:12.5px}
  .bd .r:nth-child(even)>.d{background:var(--zeb)}
  .bd .r:nth-child(even)>.n{background:var(--zeb)}
  .bd .r:hover>.d,.bd .r:hover>.n{background:var(--hov)}
  .c-off,.c-sz,.c-al{display:inline-block;text-align:right}
  .c-off{min-width:7ch;color:var(--num)}
  .c-sz{min-width:6ch;color:var(--cm)}
  .c-al{min-width:6ch;color:var(--mut)}
  .bd .r.hdr .n span{color:var(--mut);font-size:10.5px;text-transform:uppercase;letter-spacing:.5px}
  /* side panel: refs / inheritance / datamap right of the code on wide screens */
  @media(min-width:1240px){
    .cls:has(> .side){display:grid;grid-template-columns:minmax(0,1fr) clamp(340px,32%,480px)}
    .cls:has(> .side) .sig{grid-column:1;grid-row:1}
    .cls:has(> .side) .sigb{grid-column:2;grid-row:1;border-left:1px solid var(--border);display:flex;align-items:center;justify-content:flex-end;gap:8px;flex-wrap:wrap;position:sticky;top:93px;z-index:3}
    .cls:has(> .side) .sigb .tag{float:none;margin-left:0}
    .cls:has(> .side) .bd{grid-column:1;grid-row:2}
    .cls:has(> .side) .side{grid-column:2;grid-row:2;border-left:1px solid var(--border)}
    .cls:has(> .side) .side>:first-child{border-top:0}
  }
  .side{display:flex;flex-direction:column;min-width:0}
  .refs,.chain,.dm{padding:12px 16px;border-top:1px solid var(--border)}
  .sec-h{display:flex;align-items:center;gap:8px;color:var(--mut);font-size:11px;font-weight:650;text-transform:uppercase;letter-spacing:.7px;margin-bottom:9px}
  .sec-h .cnt{font:700 11px/1 var(--mono);color:var(--fg);letter-spacing:0;text-transform:none}
  .chips{display:flex;flex-wrap:wrap;gap:6px}
  .chips .xtra{display:contents}
  .chips .xtra[hidden]{display:none}
  .chip{font-family:var(--mono);font-size:12.5px;font-weight:inherit;text-decoration:none;color:var(--ty);background:var(--bg);border:1px solid var(--border);border-radius:7px;padding:3px 10px;transition:border-color .1s,color .1s}
  .chip:hover{border-color:var(--acc);color:var(--acc)}
  .chip.more{color:var(--mut);background:transparent;border-style:dashed;cursor:pointer}
  .chip.more:hover{color:var(--acc);border-color:var(--acc)}
  .chip.cur{color:var(--enm);border-color:var(--enm)}
  .chain-row{display:flex;flex-wrap:wrap;align-items:center;gap:6px}
  .chain-row .arr{color:var(--mut);font-size:12px}
  .dm{overflow-x:auto}
  .dmg .k,.dmg .tgt,.dmg .fn{white-space:nowrap}
  .dm .dsub{color:var(--mut);font-size:10.5px;text-transform:uppercase;letter-spacing:.6px;margin:10px 0 4px}
  .dm .dsub:first-of-type{margin-top:2px}
  .dmg{display:grid;grid-template-columns:auto auto 1fr auto;gap:2px 10px;align-items:baseline;font-family:var(--mono);font-size:12.5px}
  .dmg .k{color:var(--mb)}
  .dmg .arr{color:var(--mut)}
  .dmg .fn{color:var(--fl)}
  .dmg .t{color:var(--mut);font-size:11px;text-align:right;white-space:nowrap}
  .dmg .mlink{color:var(--ty);text-decoration:none}
  .dmg .mlink:hover{color:var(--acc);text-decoration:underline}
  .bd a.fl{opacity:.22;margin-left:8px;color:var(--mut);text-decoration:none;font-weight:700;transition:opacity .1s,color .1s;user-select:none}
  .bd .r:hover a.fl{opacity:.6}
  .bd a.fl:hover{opacity:1;color:var(--acc)}
  .bd a.fl.ok{opacity:1;color:var(--acc)}
  .bd .mb[id]{scroll-margin-top:140px}
  .bd .mb:target{background:var(--flash);outline:1px solid var(--acc);border-radius:3px}
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
</style>
</head><body>
<header>
  <h1>Source 2 Schema</h1><span class="ver">)"
	     << (gameVersion.empty() ? std::string() : "PatchVersion " + HtmlEscape(gameVersion) + " &middot; ")
	     << "dumped " << HtmlEscape(dumpDate) << R"(</span>
  <nav id="tabs"></nav>
  <div class="seg">
    <button id="pad" class="tgl" title="show padding fields"><span class="sw"></span>padding</button>
    <button id="hex" class="tgl" title="show all numbers as hex"><span class="sw"></span>hex</button>
  </div>
  <button id="treeBtn" title="class inheritance tree">&#x2261; tree</button>
  <span class="hint">)" << total << R"( types &middot; Ctrl-F to find one</span>
</header>
<div class="wrap">
<aside id="toc"><input id="filter" placeholder="filter libraries..." autocomplete="off"><button class="clear" id="clear">clear filter</button>)";

	for (const Module& m : modules) {
		size_t nStruct = 0;
		for (const ClassRec& rec : m.classes) {
			if (IsStructName(rec.info->m_pszName)) {
				++nStruct;
			}
		}
		const size_t nClass = m.classes.size() - nStruct;
		page << "<div class=\"lib\" data-n=\"" << HtmlEscape(m.scope) << "\">"
		     << "<a class=\"lib-h\" href=\"#m_" << m.safe << "\" data-lib=\"" << m.safe << "\">"
		     << HtmlEscape(m.scope) << "<span>" << (m.classes.size() + m.enums.size()) << "</span></a>";
		auto sub = [&](const char* k, const char* label, size_t n) {
			if (n) {
				page << "<a class=\"sub\" data-lib=\"" << m.safe << "\" data-k=\"" << k << "\" href=\"#m_" << m.safe << "\">"
				     << label << "<span>" << n << "</span></a>";
			}
		};
		sub("class", "classes", nClass);
		sub("struct", "structs", nStruct);
		sub("enum", "enums", m.enums.size());
		page << "</div>";
	}

	page << "</aside>\n<main>\n";

	static const std::vector<std::string> kEmpty;
	auto refsOf = [&](const char* name) -> const std::vector<std::string>& {
		auto it = refs.find(name);
		return it != refs.end() ? it->second : kEmpty;
	};

	for (const Module& m : modules) {
		page << "<section data-lib=\"" << m.safe << "\"><h2 id=\"m_" << m.safe << "\">" << HtmlEscape(m.scope)
		     << " <span>" << m.classes.size() << " classes, " << m.enums.size() << " enums</span></h2>\n";

		// enums, then structs, then classes
		for (CSchemaEnumInfo* e : m.enums) {
			page << EnumHtml(e, refsOf(e->m_pszName));
		}
		for (const ClassRec& rec : m.classes) {
			if (IsStructName(rec.info->m_pszName)) {
				page << ClassHtml(rec.info, rec.fields, known, refsOf(rec.info->m_pszName), rec.embedded);
			}
		}
		for (const ClassRec& rec : m.classes) {
			if (!IsStructName(rec.info->m_pszName)) {
				page << ClassHtml(rec.info, rec.fields, known, refsOf(rec.info->m_pszName), rec.embedded);
			}
		}
		page << "</section>\n";
	}

	// inheritance forest: parent -> sorted children, roots ordered by subtree size (big hierarchies first)
	{
		std::unordered_set<std::string> classNames;
		for (const Module& m : modules) {
			for (const ClassRec& rec : m.classes) {
				classNames.insert(rec.info->m_pszName);
			}
		}
		std::unordered_map<std::string, std::vector<std::string>> kids;
		std::vector<std::string> roots;
		for (const Module& m : modules) {
			for (const ClassRec& rec : m.classes) {
				const char* p = ParentName(rec.info);
				if (p && classNames.count(p)) {
					kids[p].push_back(rec.info->m_pszName);
				} else {
					roots.push_back(rec.info->m_pszName);
				}
			}
		}
		for (auto& [k, v] : kids) {
			std::sort(v.begin(), v.end());
		}
		std::unordered_map<std::string, int> subtree;
		auto size = [&](const std::string& n, auto&& self) -> int {
			if (auto it = subtree.find(n); it != subtree.end()) {
				return it->second;
			}
			int total = 1;
			subtree[n] = 1; // guard against cycles
			if (auto it = kids.find(n); it != kids.end()) {
				for (const std::string& c : it->second) {
					total += self(c, self);
				}
			}
			return subtree[n] = total;
		};
		for (const std::string& r : roots) {
			size(r, size);
		}
		std::sort(roots.begin(), roots.end(), [&](const std::string& a, const std::string& b) {
			int sa = subtree[a], sb = subtree[b];
			return sa != sb ? sa > sb : a < b;
		});
		auto jstr = [](const std::string& s) {
			std::string o = "\"";
			for (char c : s) {
				if (c == '"' || c == '\\') {
					o += '\\';
				}
				o += c;
			}
			return o + "\"";
		};
		page << "<script>\nconst KIDS={";
		bool first = true;
		for (const auto& [k, v] : kids) {
			page << (first ? "" : ",") << jstr(k) << ":[";
			first = false;
			for (size_t i = 0; i < v.size(); ++i) {
				page << (i ? "," : "") << jstr(v[i]);
			}
			page << "]";
		}
		page << "};\nconst ROOTS=[";
		for (size_t i = 0; i < roots.size(); ++i) {
			page << (i ? "," : "") << jstr(roots[i]);
		}
		page << "];\n</script>\n";
	}

	page << R"(</main></div>
<div id="tree" hidden><div class="tree-box">
  <div class="tree-h"><input id="treeF" placeholder="filter classes..." autocomplete="off"><button id="treeX">close</button></div>
  <div id="treeBody"></div>
  <div id="treeFlat" hidden></div>
</div></div>
<script>
const PAGE=")" << PLATFORM_NAME << R"(";
fetch("platforms.json").then(r=>r.json()).then(ps=>{
  const t=document.getElementById("tabs");
  ps.forEach(p=>{const a=document.createElement("a");a.href=p+".html";a.textContent=p;if(p===PAGE)a.className="cur";t.appendChild(a);});
}).catch(()=>{});

const f=document.getElementById("filter");
f.oninput=()=>{const q=f.value.toLowerCase();document.querySelectorAll("#toc .lib").forEach(d=>{d.style.display=d.dataset.n.toLowerCase().includes(q)?"":"none";});};

// filter selection: "lib" = whole library, "lib|kind" = one kind of one library
const active=new Set();
const clearBtn=document.getElementById("clear");
function apply(){
  document.querySelectorAll("main section").forEach(s=>{
    const lib=s.dataset.lib;
    let vis=false;
    s.querySelectorAll(".cls").forEach(c=>{
      const show=active.size===0||active.has(lib)||active.has(lib+"|"+c.dataset.k);
      c.style.display=show?"":"none"; if(show)vis=true;
    });
    s.style.display=vis?"":"none";
  });
  document.querySelectorAll("#toc a[data-lib]").forEach(a=>{
    const key=a.dataset.k?a.dataset.lib+"|"+a.dataset.k:a.dataset.lib;
    a.classList.toggle("active",active.has(key));
  });
  clearBtn.classList.toggle("on",active.size>0);
}
document.getElementById("toc").addEventListener("click",e=>{
  const a=e.target.closest("a[data-lib]"); if(!a) return;
  e.preventDefault();
  const lib=a.dataset.lib;
  const key=a.dataset.k?lib+"|"+a.dataset.k:lib;
  if(active.has(key)){
    active.delete(key);
  }else{
    if(a.dataset.k){ active.delete(lib); }               // one kind selected -> whole-lib entry is redundant
    else{ for(const x of [...active]){ if(x.startsWith(lib+"|")) active.delete(x); } } // whole lib absorbs kinds
    active.add(key);
  }
  apply();
  if(active.has(key)){const sec=document.getElementById("m_"+lib); if(sec) sec.scrollIntoView();}
});
clearBtn.onclick=()=>{active.clear();apply();};

document.addEventListener("click",e=>{
  const a=e.target.closest('a[href^="#"]');
  if(!a||a.dataset.lib) return;
  const el=document.getElementById(a.getAttribute("href").slice(1));
  if(el && el.offsetParent===null){ active.clear(); apply(); }
});

function copyFB(b,txt){
  navigator.clipboard.writeText(txt).then(()=>{
    const t=b.textContent;b.textContent="copied!";setTimeout(()=>{b.textContent=t;},900);
  });
}
function cpField(a){
  // copy the deep link only; do NOT navigate/scroll (caller returns false)
  navigator.clipboard.writeText(location.origin+location.pathname+a.getAttribute("href"));
  a.classList.add("ok");setTimeout(()=>a.classList.remove("ok"),700);
}
function cardRows(card){
  return [...card.querySelectorAll(".btbl .r")].filter(r=>!r.classList.contains("hdr"));
}
function copySchema(b){
  const card=b.closest(".cls");
  const name=card.querySelector(".sig .cn").textContent;
  const kind=card.querySelector(".sig .kw").textContent;
  const par=card.querySelector(".sig a.ty");
  let out=kind+" "+name+(par?" : public "+par.textContent:"")+"\n{\npublic:\n\tDECLARE_SCHEMA_CLASS("+name+")\n\n";
  cardRows(card).forEach(r=>{
    if(r.classList.contains("padline"))return;
    const ty=r.querySelector(".d .ty"),mb=r.querySelector(".d .mb");
    if(!ty||!mb)return;
    out+="\tSCHEMA_FIELD("+ty.textContent.trim()+", "+mb.textContent+")\n";
  });
  copyFB(b,out+"};");
}
function copyFields(b){
  const card=b.closest(".cls");
  const showPad=document.body.classList.contains("showpad");
  const lines=[];
  cardRows(card).forEach(r=>{
    if(!showPad&&r.classList.contains("padline"))return;
    const d=r.querySelector(".d").cloneNode(true);
    d.querySelectorAll(".meta").forEach(m=>m.remove());
    const t=d.textContent.trim();
    if(t&&t!=="public:")lines.push(t);
  });
  copyFB(b,lines.join("\n"));
}

function tglMore(b){
  const x=b.parentElement.querySelector(".xtra"); if(!x) return;
  if(x.hasAttribute("hidden")){x.removeAttribute("hidden");b.textContent="hide";}
  else{x.setAttribute("hidden","");b.textContent="+"+b.dataset.n+" more";}
}

const pb=document.getElementById("pad");
function setPad(v){document.body.classList.toggle("showpad",v);pb.classList.toggle("on",v);localStorage.setItem("showpad",v?"1":"0");}
pb.onclick=()=>setPad(!document.body.classList.contains("showpad"));
setPad(localStorage.getItem("showpad")==="1");

const hb=document.getElementById("hex");
function setHex(v){
  hb.classList.toggle("on",v);localStorage.setItem("hexmode",v?"1":"0");
  document.querySelectorAll(".nv").forEach(el=>{el.textContent=v?el.dataset.h:parseInt(el.dataset.h,16);});
}
hb.onclick=()=>setHex(!hb.classList.contains("on"));
if(localStorage.getItem("hexmode")==="1")setHex(true);

// inheritance tree overlay (lazy: children render only when a node is expanded)
const anchorOf=n=>n.replace(/[^A-Za-z0-9_.-]/g,"_");
function treeNode(name){
  const kids=KIDS[name];
  const row=document.createElement("div");row.className="tn";
  const head=document.createElement("div");head.className="tn-h";
  const tog=document.createElement("span");tog.className="tn-t";
  tog.textContent=kids?"▸":"";
  const link=document.createElement("a");link.className="tn-n";link.textContent=name;link.href="#"+anchorOf(name);
  if(kids){const c=document.createElement("span");c.className="tn-c";c.textContent=kids.length;head.append(tog,link,c);}
  else head.append(tog,link);
  row.append(head);
  let kidBox=null;
  if(kids){
    head.onclick=e=>{
      if(e.target===link)return;
      if(!kidBox){kidBox=document.createElement("div");kidBox.className="tn-k";kids.forEach(k=>kidBox.append(treeNode(k)));row.append(kidBox);}
      const open=row.classList.toggle("open");tog.textContent=open?"▾":"▸";
    };
  }
  return row;
}
const treeEl=document.getElementById("tree"),treeBody=document.getElementById("treeBody"),
      treeFlat=document.getElementById("treeFlat"),treeF=document.getElementById("treeF");
const ALLNAMES=[...new Set([...ROOTS,...Object.keys(KIDS),...Object.values(KIDS).flat()])].sort();
let treeBuilt=false;
function openTree(){
  if(!treeBuilt){ROOTS.forEach(r=>treeBody.append(treeNode(r)));treeBuilt=true;}
  treeEl.removeAttribute("hidden");treeF.focus();
}
function closeTree(){treeEl.setAttribute("hidden","");}
document.getElementById("treeBtn").onclick=openTree;
document.getElementById("treeX").onclick=closeTree;
treeEl.onclick=e=>{if(e.target===treeEl)closeTree();};
document.addEventListener("keydown",e=>{if(e.key==="Escape"&&!treeEl.hasAttribute("hidden"))closeTree();});
treeEl.addEventListener("click",e=>{const a=e.target.closest("a.tn-n");if(a)closeTree();});
// empty filter -> hierarchy; non-empty -> flat list of every matching class
treeF.oninput=()=>{
  const q=treeF.value.toLowerCase();
  if(!q){treeFlat.hidden=true;treeBody.hidden=false;return;}
  treeBody.hidden=true;treeFlat.hidden=false;treeFlat.textContent="";
  const frag=document.createDocumentFragment();
  ALLNAMES.filter(n=>n.toLowerCase().includes(q)).slice(0,500).forEach(n=>{
    const a=document.createElement("a");a.className="tn-n flat";a.textContent=n;a.href="#"+anchorOf(n);frag.append(a);
  });
  treeFlat.append(frag);
};
</script>
</body></html>
)";

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
