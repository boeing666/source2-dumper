#include "schema_util.hpp"

#include <algorithm>
#include <cctype>

namespace schema {

bool IdentChar(char c) {
	// ':' included so qualified names (Outer_t::Inner_t) scan as one token and match a class.
	return std::isalnum(static_cast<unsigned char>(c)) || c == '_' || c == ':';
}

std::string SafeName(std::string_view name) {
	std::string out(name);
	for (char& c : out) {
		if (!(std::isalnum(static_cast<unsigned char>(c)) || c == '_' || c == '.' || c == '-')) {
			c = '_';
		}
	}
	return out;
}

std::string HtmlEscape(std::string_view s) {
	std::string out;
	out.reserve(s.size());
	for (char c : s) {
		if (c == '&') {
			out += "&amp;";
		} else if (c == '<') {
			out += "&lt;";
		} else if (c == '>') {
			out += "&gt;";
		} else {
			out += c;
		}
	}
	return out;
}

std::string JoinTags(const std::vector<std::string>& tags) {
	std::string s;
	for (size_t i = 0; i < tags.size(); ++i) {
		if (i) {
			s += ' ';
		}
		s += tags[i];
	}
	return s;
}

const char* TypeName(CSchemaType* t) {
	if (!t) {
		return "void";
	}
	const char* n = t->m_sTypeName.Get();
	return (n && *n) ? n : "void";
}

void TypeSize(CSchemaType* t, int& size, uint8& align) {
	size = 0;
	align = 1;
	if (t) {
		t->GetSizeAndAlignment(size, align);
	}
}

bool FieldBits(CSchemaType* t, int& bits) {
	if (t && t->m_eTypeCategory == SCHEMA_TYPE_BITFIELD) {
		bits = static_cast<CSchemaType_Bitfield*>(t)->m_nBitfieldCount;
		return true;
	}
	return false;
}

const char* BitUnderlying(int bits) {
	if (bits <= 8) {
		return "uint8_t";
	}
	if (bits <= 16) {
		return "uint16_t";
	}
	if (bits <= 32) {
		return "uint32_t";
	}
	return "uint64_t";
}

const char* EnumUnderlying(uint8 size) {
	if (size == 1) {
		return "uint8_t";
	}
	if (size == 2) {
		return "uint16_t";
	}
	if (size == 4) {
		return "uint32_t";
	}
	return "uint64_t";
}

bool IsStructName(std::string_view name) {
	return name.size() >= 2 && name[name.size() - 2] == '_' && name[name.size() - 1] == 't';
}

const char* ParentName(CSchemaClassInfo* c) {
	if (c->m_nBaseClassCount && c->m_pBaseClasses && c->m_pBaseClasses[0].m_pClass) {
		return c->m_pBaseClasses[0].m_pClass->m_pszName;
	}
	return nullptr;
}

bool DerivesFromEntity(CSchemaClassInfo* c) {
	for (int depth = 0; c && depth < 64; ++depth) {
		if (c->m_pszName && std::string_view(c->m_pszName) == "CEntityInstance") {
			return true;
		}
		if (c->m_nBaseClassCount && c->m_pBaseClasses && c->m_pBaseClasses[0].m_pClass) {
			c = c->m_pBaseClasses[0].m_pClass;
		} else {
			break;
		}
	}
	return false;
}

std::vector<const SchemaClassFieldData_t*> SortedFields(CSchemaClassInfo* c) {
	std::vector<const SchemaClassFieldData_t*> fields;
	fields.reserve(c->m_nFieldCount);
	for (uint16 i = 0; i < c->m_nFieldCount; ++i) {
		if (c->m_pFields) {
			fields.push_back(&c->m_pFields[i]);
		}
	}
	std::sort(fields.begin(), fields.end(), [](auto* a, auto* b) {
		return a->m_nSingleInheritanceOffset < b->m_nSingleInheritanceOffset;
	});
	return fields;
}

std::vector<std::string> MetaTags(int count, SchemaMetadataEntryData_t* arr) {
	std::vector<std::string> tags;
	for (int i = 0; i < count && arr; ++i) {
		if (arr[i].m_pszName && *arr[i].m_pszName) {
			tags.emplace_back(arr[i].m_pszName);
		}
	}
	return tags;
}

const char* FieldTypeName(int t) {
	static const char* kNames[] = {
		"FIELD_VOID", "FIELD_FLOAT32", "FIELD_STRING", "FIELD_VECTOR", "FIELD_QUATERNION", "FIELD_INT32",
		"FIELD_BOOLEAN", "FIELD_INT16", "FIELD_CHARACTER", "FIELD_COLOR32", "FIELD_EMBEDDED", "FIELD_CUSTOM",
		"FIELD_CLASSPTR", "FIELD_EHANDLE", "FIELD_POSITION_VECTOR", "FIELD_TIME", "FIELD_TICK", "FIELD_SOUNDNAME",
		"FIELD_INPUT", "FIELD_FUNCTION", "FIELD_VMATRIX", "FIELD_VMATRIX_WORLDSPACE", "FIELD_MATRIX3X4_WORLDSPACE",
		"FIELD_INTERVAL", "FIELD_UNUSED", "FIELD_VECTOR2D", "FIELD_INT64", "FIELD_VECTOR4D", "FIELD_RESOURCE",
		"FIELD_TYPEUNKNOWN", "FIELD_CSTRING", "FIELD_HSCRIPT", "FIELD_VARIANT", "FIELD_UINT64", "FIELD_FLOAT64",
		"FIELD_POSITIVEINTEGER_OR_NULL", "FIELD_HSCRIPT_NEW_INSTANCE", "FIELD_UINT32", "FIELD_UTLSTRINGTOKEN",
		"FIELD_QANGLE", "FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR", "FIELD_HMATERIAL", "FIELD_HMODEL",
		"FIELD_NETWORK_QUANTIZED_VECTOR", "FIELD_NETWORK_QUANTIZED_FLOAT", "FIELD_DIRECTION_VECTOR_WORLDSPACE",
		"FIELD_QANGLE_WORLDSPACE", "FIELD_QUATERNION_WORLDSPACE", "FIELD_HSCRIPT_LIGHTBINDING", "FIELD_V8_VALUE",
		"FIELD_V8_OBJECT", "FIELD_V8_ARRAY", "FIELD_V8_CALLBACK_INFO", "FIELD_UTLSTRING",
		"FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR", "FIELD_HRENDERTEXTURE",
		"FIELD_HPARTICLESYSTEMDEFINITION", "FIELD_UINT8", "FIELD_UINT16", "FIELD_CTRANSFORM",
		"FIELD_CTRANSFORM_WORLDSPACE", "FIELD_HPOSTPROCESSING", "FIELD_MATRIX3X4", "FIELD_SHIM",
		"FIELD_CMOTIONTRANSFORM", "FIELD_CMOTIONTRANSFORM_WORLDSPACE", "FIELD_ATTACHMENT_HANDLE", "FIELD_AMMO_INDEX",
		"FIELD_CONDITION_ID", "DEPRECATED_FIELD_AI_SCHEDULE_BITS", "FIELD_MODIFIER_HANDLE", "FIELD_ROTATION_VECTOR",
		"FIELD_ROTATION_VECTOR_WORLDSPACE", "FIELD_HVDATA", "FIELD_SCALE32", "FIELD_STRING_AND_TOKEN",
		"FIELD_ENGINE_TIME", "FIELD_ENGINE_TICK", "FIELD_WORLD_GROUP_ID", "FIELD_GLOBALSYMBOL",
		"FIELD_HNMGRAPHDEFINITION", "FIELD_NETWORK_QUANTIZED_VECTORWS",
		"FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTORWS", "FIELD_TYPECOUNT",
	};
	if (t >= 0 && t < static_cast<int>(sizeof(kNames) / sizeof(*kNames))) {
		return kNames[t];
	}
	return "FIELD_?";
}

std::string ClassFlags(uint32 flags1) {
	std::string s;
	auto add = [&](uint32 bit, const char* n) {
		if (flags1 & bit) {
			if (!s.empty()) {
				s += ' ';
			}
			s += n;
		}
	};
	add(1u << 0, "vtable");
	add(1u << 1, "abstract");
	add(1u << 2, "trivial_ctor");
	add(1u << 3, "trivial_dtor");
	return s;
}

} // namespace schema
