#include "output/header_writer.hpp"
#include "schema/schema_util.hpp"

#include <algorithm>
#include <format>
#include <fstream>

namespace schema {
namespace fs = std::filesystem;

static std::string ClassBody(CSchemaClassInfo* c, const std::vector<const SchemaClassFieldData_t*>& fields) {
	const bool isStruct = IsStructName(c->m_pszName);
	std::string s = isStruct ? "struct " : "class ";
	s += c->m_pszName;

	for (uint8 b = 0; b < c->m_nBaseClassCount && c->m_pBaseClasses; ++b) {
		const SchemaBaseClassInfoData_t& bc = c->m_pBaseClasses[b];
		if (!bc.m_pClass) {
			continue;
		}
		s += (b == 0) ? " : " : ", ";
		s += std::format("public {} /*0x{:X}*/", bc.m_pClass->m_pszName, bc.m_nOffset);
	}

	s += std::format("  // sizeof 0x{:X}, align 0x{:X}", c->m_nSize, c->m_nAlignment);
	if (std::string fl = ClassFlags(c->m_nFlags1); !fl.empty()) {
		s += " [" + fl + "]";
	}
	if (c->m_pszProjectName && *c->m_pszProjectName) {
		s += std::format(" ({})", c->m_pszProjectName);
	}
	if (auto m = MetaTags(c->m_nStaticMetadataCount, c->m_pStaticMetadata); !m.empty()) {
		s += " {" + JoinTags(m) + "}";
	}
	s += "\n{\n";
	if (!isStruct) {
		s += "public:\n";
	}

	int cursor = 0;
	auto pad = [&](int from, int to) {
		if (to > from) {
			s += std::format("    char _pad_{:04X}[0x{:X}]; // offset 0x{:X}\n", from, to - from, from);
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

		const char* name = f->m_pszName ? f->m_pszName : "field";
		std::string meta = JoinTags(MetaTags(f->m_nStaticMetadataCount, f->m_pStaticMetadata));
		if (!meta.empty()) {
			meta = " | " + meta;
		}

		int bits;
		if (FieldBits(f->m_pType, bits)) {
			s += std::format("    {} {} : {}; // offset 0x{:X}{}\n", BitUnderlying(bits), name, bits, off, meta);
		} else {
			s += std::format("    {} {}; // offset 0x{:X}, size 0x{:X}, align {}{}\n",
			                 TypeName(f->m_pType), name, off, size, align, meta);
		}
		cursor = std::max(cursor, off + size);
	}
	pad(cursor, c->m_nSize);
	s += "};\n";
	return s;
}

static std::string EnumBody(CSchemaEnumInfo* e) {
	std::string s = std::format("enum {} : {}  // sizeof 0x{:X}", e->m_pszName, EnumUnderlying(e->m_nSize), e->m_nSize);
	if (auto m = MetaTags(e->m_nStaticMetadataCount, e->m_pStaticMetadata); !m.empty()) {
		s += " {" + JoinTags(m) + "}";
	}
	s += "\n{\n";
	for (uint16 i = 0; i < e->m_nEnumeratorCount && e->m_pEnumerators; ++i) {
		const auto& en = e->m_pEnumerators[i];
		s += std::format("    {} = {},\n", en.m_pszName ? en.m_pszName : "?", static_cast<long long>(en.m_nValue));
	}
	s += "};\n";
	return s;
}

void WriteHeaders(const std::vector<Module>& modules, const fs::path& root) {
	for (const Module& m : modules) {
		const fs::path dir = root / m.safe;
		fs::create_directories(dir);
		for (const ClassRec& rec : m.classes) {
			std::ofstream h(dir / (SafeName(rec.info->m_pszName) + ".h"), std::ios::trunc);
			if (h) {
				h << "#pragma once\n\n" << ClassBody(rec.info, rec.fields);
			}
		}
		for (CSchemaEnumInfo* e : m.enums) {
			std::ofstream h(dir / (SafeName(e->m_pszName) + ".h"), std::ios::trunc);
			if (h) {
				h << "#pragma once\n\n" << EnumBody(e);
			}
		}
	}
}

static std::string JoinFlags(const std::vector<std::string>& flags) {
	std::string s;
	for (size_t i = 0; i < flags.size(); ++i) {
		if (i) {
			s += ',';
		}
		s += flags[i];
	}
	return s;
}

static std::string OneLine(std::string s) {
	for (char& c : s) {
		if (c == '\n' || c == '\r' || c == '\t') {
			c = ' ';
		}
	}
	return s;
}

void WriteConVarDump(const std::vector<ConVarInfo>& convars, const std::vector<ConCommandInfo>& concommands,
                     const fs::path& dir) {
	fs::create_directories(dir);

	std::vector<ConVarInfo> cv = convars;
	std::ranges::sort(cv, [](const ConVarInfo& a, const ConVarInfo& b) { return a.name < b.name; });
	std::string cvs;
	for (const ConVarInfo& c : cv) {
		cvs += std::format("{} | {} | {}\n", c.name, JoinFlags(c.flags), OneLine(c.help));
	}
	std::ofstream(dir / "convars.txt", std::ios::trunc) << cvs;

	std::vector<ConCommandInfo> cc = concommands;
	std::ranges::sort(cc, [](const ConCommandInfo& a, const ConCommandInfo& b) { return a.name < b.name; });
	std::string ccs;
	for (const ConCommandInfo& c : cc) {
		ccs += std::format("{} | {} | {}\n", c.name, JoinFlags(c.flags), OneLine(c.help));
	}
	std::ofstream(dir / "concommands.txt", std::ios::trunc) << ccs;
}

}
