#pragma once

#include <string>
#include <vector>

#include <schemasystem/schemasystem.h>

namespace schema {

struct ClassRec {
	CSchemaClassInfo* info;
	std::vector<const SchemaClassFieldData_t*> fields;
	bool embedded;
};

struct Module {
	std::string scope;
	std::string safe;
	std::vector<ClassRec> classes;
	std::vector<CSchemaEnumInfo*> enums;
};

} // namespace schema
