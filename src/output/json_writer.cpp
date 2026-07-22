#include "output/json_writer.hpp"
#include "schema/schema_util.hpp"

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <format>
#include <fstream>
#include <print>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <glaze/glaze.hpp>

namespace fs = std::filesystem;

namespace schema {

struct JField {
	std::string name;
	std::string type;
	int32_t offset = 0;
	int32_t size = 0;
	int32_t align = -1;
	bool networked = false;
	int32_t bits = 0;
	std::vector<std::string> metadata;
};

struct JBaseClass {
	std::string name;
	int32_t offset = 0;
};

struct JDatamap {
	std::string kind;
	std::string name;
	std::string target;
	std::string type;
};

struct JEnumValue {
	std::string name;
	int64_t value = 0;
};

struct JEnum {
	std::string name;
	int32_t size = 0;
	std::string underlying;
	std::string project;
	std::vector<std::string> metadata;
	std::vector<JEnumValue> values;
};

struct JClass {
	std::string name;
	std::string parent;
	bool isStruct = false;
	int32_t size = 0;
	int32_t align = -1;
	int32_t inheritDepth = 0;
	std::string project;
	uint32_t flagsRaw = 0;
	std::vector<std::string> flags;
	std::vector<JBaseClass> baseClasses;
	bool entity = false;
	std::vector<std::string> metadata;
	std::vector<JField> fields;
	std::vector<JDatamap> datamap;
	std::vector<std::string> refs;
};

struct JScope {
	std::string scope;
	std::vector<JClass> classes;
	std::vector<JEnum> enums;
};

struct JIndexEntry {
	std::string name;
	std::string kind;
	std::string scope;
	std::string file;
	std::string parent;
	bool entity = false;
	int32_t nf = 0;
	int32_t depth = 0;
	int32_t ni = 0, no = 0, nk = 0;
	std::string fields;
	std::string offsets;
};

struct JScopeIndex {
	std::string scope;
	std::string file;
	int32_t classes = 0;
	int32_t enums = 0;
};

struct JMeta {
	std::string game;
	std::string platform;
	std::string patchVersion;
	std::string serverVersion;
	int32_t types = 0;
	int32_t classes = 0;
	int32_t enums = 0;
	int32_t convars = 0;
	int32_t concommands = 0;
	int32_t networkFields = 0;
	int32_t events = 0;
	std::vector<JScopeIndex> scopes;
};

static int InheritDepth(CSchemaClassInfo* c) {
	int d = 0;
	for (CSchemaClassInfo* p = c; p && d < 64; ++d) {
		p = (p->m_nBaseClassCount && p->m_pBaseClasses && p->m_pBaseClasses[0].m_pClass) ? p->m_pBaseClasses[0].m_pClass : nullptr;
	}
	return d;
}

static void CollectRefs(CSchemaClassInfo* c, const std::vector<const SchemaClassFieldData_t*>& fields,
                        const std::unordered_set<std::string>& known, std::vector<std::string>& out) {
	std::unordered_set<std::string> local;
	auto scan = [&](std::string_view s) {
		for (size_t i = 0; i < s.size();) {
			if (!IdentChar(s[i])) { ++i; continue; }
			size_t j = i;
			while (j < s.size() && IdentChar(s[j])) { ++j; }
			std::string id(s.substr(i, j - i));
			if (known.contains(id)) { local.insert(std::move(id)); }
			i = j;
		}
	};
	if (const char* p = ParentName(c)) { scan(p); }
	for (auto* f : fields) { scan(TypeName(f->m_pType)); }
	local.erase(c->m_pszName);
	out.assign(local.begin(), local.end());
	std::ranges::sort(out);
}

static void BuildDatamap(CSchemaClassInfo* c, std::vector<JDatamap>& out, int& ni, int& no, int& nk) {
	ni = no = nk = 0;
	const datamap_t* dm = c->m_pDataMap;
	if (!dm || dm->dataNumFields <= 0 || !dm->dataDesc) {
		return;
	}
	constexpr int F_KEY = 1 << 2, F_INPUT = 1 << 3, F_OUTPUT = 1 << 4, F_PROC_KEY = 1 << 12;

	struct Span { int off; int size; const char* name; };
	std::vector<Span> spans;
	for (CSchemaClassInfo* p = c; p;
	     p = (p->m_nBaseClassCount && p->m_pBaseClasses && p->m_pBaseClasses[0].m_pClass) ? p->m_pBaseClasses[0].m_pClass : nullptr) {
		for (uint16 i = 0; i < p->m_nFieldCount && p->m_pFields; ++i) {
			const SchemaClassFieldData_t& f = p->m_pFields[i];
			if (!f.m_pszName) { continue; }
			int sz = 0; uint8 al = 0;
			TypeSize(f.m_pType, sz, al);
			spans.push_back({ f.m_nSingleInheritanceOffset, sz > 0 ? sz : 1, f.m_pszName });
		}
	}
	auto member = [&](int off) -> std::string {
		if (off < 0 || off == 0x7FFFFFFF) { return {}; }
		const Span* best = nullptr;
		for (const Span& sp : spans) {
			if (off >= sp.off && off < sp.off + sp.size && (!best || sp.size < best->size)) { best = &sp; }
		}
		if (!best) { return {}; }
		std::string m = best->name;
		if (off != best->off) { m += "+" + std::to_string(off - best->off); }
		return m;
	};

	for (int i = 0; i < dm->dataNumFields; ++i) {
		const typedescription_t& td = dm->dataDesc[i];
		const char* fn = td.fieldName;
		const char* ext = td.externalName;
		const bool hasFn = fn && *fn;
		const bool hasExt = ext && *ext;
		if (!hasFn && !hasExt) { continue; }
		const std::string type = FieldTypeName(static_cast<int>(td.fieldType));
		const std::string writes = member(td.fieldOffset);
		if (td.flags & F_INPUT) {
			std::string handler;
			if (hasFn && (!hasExt || std::string_view(fn) != "Input" + std::string(ext))) { handler = fn; }
			out.push_back({ "input", hasExt ? ext : fn, handler, type });
			++ni;
		} else if (td.flags & F_OUTPUT) {
			out.push_back({ "output", hasExt ? ext : fn, writes, type });
			++no;
		} else if (td.flags & (F_KEY | F_PROC_KEY) || hasExt) {
			std::string target = writes;
			if (target.empty() && hasExt && hasFn && std::string_view(fn) != ext) { target = fn; }
			out.push_back({ "keyfield", hasExt ? ext : fn, target, type });
			++nk;
		} else {
			out.push_back({ "field", fn, writes, type });
		}
	}
}

static std::vector<std::string> SplitWords(const std::string& s) {
	std::vector<std::string> out;
	for (size_t i = 0; i < s.size();) {
		while (i < s.size() && s[i] == ' ') { ++i; }
		size_t j = i;
		while (j < s.size() && s[j] != ' ') { ++j; }
		if (j > i) { out.emplace_back(s.substr(i, j - i)); }
		i = j;
	}
	return out;
}

template <class T>
static void WriteFile(const fs::path& path, const T& obj) {
	std::string buf;
	if (auto ec = glz::write_json(obj, buf); ec) {
		std::println(stderr, "json: write error for {}", path.string());
		return;
	}
	std::ofstream(path, std::ios::binary | std::ios::trunc).write(buf.data(), (std::streamsize)buf.size());
}

static JClass BuildClass(const ClassRec& rec, const std::unordered_set<std::string>& network,
                         const std::unordered_set<std::string>& known,
                         int& outNi, int& outNo, int& outNk) {
	CSchemaClassInfo* c = rec.info;
	JClass jc;
	jc.name = c->m_pszName ? c->m_pszName : "";
	jc.isStruct = IsStructName(jc.name);
	jc.parent = ParentName(c) ? ParentName(c) : "";
	jc.size = c->m_nSize;
	jc.align = c->m_nAlignment == 0xFF ? -1 : c->m_nAlignment;
	jc.inheritDepth = InheritDepth(c);
	jc.project = c->m_pszProjectName ? c->m_pszProjectName : "";
	jc.flagsRaw = c->m_nFlags1;
	jc.flags = SplitWords(ClassFlags(c->m_nFlags1));
	jc.entity = !rec.embedded;
	jc.metadata = MetaTags(c->m_nStaticMetadataCount, c->m_pStaticMetadata);
	for (uint8 b = 0; b < c->m_nBaseClassCount && c->m_pBaseClasses; ++b) {
		if (const auto* bc = c->m_pBaseClasses[b].m_pClass; bc && bc->m_pszName) {
			jc.baseClasses.push_back({ bc->m_pszName, (int32_t)c->m_pBaseClasses[b].m_nOffset });
		}
	}
	for (const SchemaClassFieldData_t* f : rec.fields) {
		JField jf;
		jf.name = f->m_pszName ? f->m_pszName : "";
		jf.offset = f->m_nSingleInheritanceOffset;
		int size = 0;
		uint8 align = 0xFF;
		TypeSize(f->m_pType, size, align);
		jf.size = size > 0 ? size : 1;
		jf.metadata = MetaTags(f->m_nStaticMetadataCount, f->m_pStaticMetadata);
		if (int bits = 0; FieldBits(f->m_pType, bits)) {
			jf.type = BitUnderlying(bits);
			jf.bits = bits;
			jf.align = -1;
		} else {
			jf.type = TypeName(f->m_pType);
			jf.align = align == 0xFF ? -1 : align;
		}
		jf.networked = f->m_pszName && network.contains(jc.name + "::" + f->m_pszName);
		jc.fields.push_back(std::move(jf));
	}
	BuildDatamap(c, jc.datamap, outNi, outNo, outNk);
	CollectRefs(c, rec.fields, known, jc.refs);
	return jc;
}

static JEnum BuildEnum(CSchemaEnumInfo* e) {
	JEnum je;
	je.name = e->m_pszName ? e->m_pszName : "";
	je.size = e->m_nSize;
	je.underlying = EnumUnderlying(e->m_nSize);
	je.project = e->m_pszProjectName ? e->m_pszProjectName : "";
	je.metadata = MetaTags(e->m_nStaticMetadataCount, e->m_pStaticMetadata);
	for (uint16 i = 0; i < e->m_nEnumeratorCount && e->m_pEnumerators; ++i) {
		const auto& en = e->m_pEnumerators[i];
		je.values.push_back({ en.m_pszName ? en.m_pszName : "", static_cast<int64_t>(en.m_nValue) });
	}
	return je;
}

void WriteJson(const fs::path& outDir,
               const std::vector<Module>& modules,
               const std::unordered_set<std::string>& known,
               const std::unordered_set<std::string>& network,
               const std::vector<ConVarInfo>& convars,
               const std::vector<ConCommandInfo>& concommands,
               const std::vector<GameEventInfo>& events,
               const std::string& patchVersion,
               const std::string& serverVersion) {
	const fs::path dir = outDir / GAME_NAME / PLATFORM_NAME;
	fs::create_directories(dir);

	JMeta meta;
	meta.game = GAME_NAME;
	meta.platform = PLATFORM_NAME;
	meta.patchVersion = patchVersion;
	meta.serverVersion = serverVersion;
	meta.convars = (int32_t)convars.size();
	meta.concommands = (int32_t)concommands.size();
	meta.networkFields = (int32_t)network.size();
	meta.events = (int32_t)events.size();

	std::vector<JIndexEntry> index;

	for (const Module& m : modules) {
		const std::string file = "schema." + m.safe + ".json";
		JScope js;
		js.scope = m.scope;

		for (const ClassRec& rec : m.classes) {
			int ni = 0, no = 0, nk = 0;
			JClass jc = BuildClass(rec, network, known, ni, no, nk);
			JIndexEntry ix;
			ix.name = jc.name;
			ix.kind = jc.isStruct ? "struct" : "class";
			ix.scope = m.scope;
			ix.file = file;
			ix.parent = jc.parent;
			ix.entity = jc.entity;
			ix.nf = (int32_t)jc.fields.size();
			ix.depth = jc.inheritDepth;
			ix.ni = ni; ix.no = no; ix.nk = nk;
			for (const JField& f : jc.fields) {
				if (!ix.fields.empty()) { ix.fields += ' '; ix.offsets += ' '; }
				ix.fields += f.name;
				ix.offsets += std::format("0x{:x}", static_cast<unsigned>(f.offset));
			}
			index.push_back(std::move(ix));
			js.classes.push_back(std::move(jc));
		}
		for (CSchemaEnumInfo* e : m.enums) {
			JEnum je = BuildEnum(e);
			JIndexEntry ix;
			ix.name = je.name;
			ix.kind = "enum";
			ix.scope = m.scope;
			ix.file = file;
			ix.nf = (int32_t)je.values.size();
			for (const JEnumValue& v : je.values) {
				if (!ix.fields.empty()) { ix.fields += ' '; }
				ix.fields += v.name;
			}
			index.push_back(std::move(ix));
			js.enums.push_back(std::move(je));
		}

		WriteFile(dir / file, js);
		meta.classes += (int32_t)js.classes.size();
		meta.enums += (int32_t)js.enums.size();
		meta.scopes.push_back({ m.scope, file, (int32_t)js.classes.size(), (int32_t)js.enums.size() });
	}
	meta.types = meta.classes + meta.enums;

	WriteFile(dir / "index.json", index);
	WriteFile(dir / "convars.json", convars);
	WriteFile(dir / "concommands.json", concommands);
	WriteFile(dir / "events.json", events);
	WriteFile(dir / "meta.json", meta);

	std::println("json: {} classes / {} enums / {} convars / {} concommands / {} events -> {}",
	             meta.classes, meta.enums, convars.size(), concommands.size(), events.size(), dir.string());
}

}
