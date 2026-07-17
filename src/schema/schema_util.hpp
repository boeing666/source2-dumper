#pragma once

#include <string>
#include <string_view>
#include <vector>

#include <schemasystem/schemasystem.h>

namespace schema {

bool IdentChar(char c);
std::string SafeName(std::string_view name);
std::string HtmlEscape(std::string_view s);
std::string JoinTags(const std::vector<std::string>& tags);

const char* TypeName(CSchemaType* t);
void TypeSize(CSchemaType* t, int& size, uint8& align);
bool FieldBits(CSchemaType* t, int& bits);
const char* BitUnderlying(int bits);
const char* EnumUnderlying(uint8 size);

bool IsStructName(std::string_view name);
const char* ParentName(CSchemaClassInfo* c);
bool DerivesFromEntity(CSchemaClassInfo* c);
std::vector<const SchemaClassFieldData_t*> SortedFields(CSchemaClassInfo* c);
std::vector<std::string> MetaTags(int count, SchemaMetadataEntryData_t* arr);
std::string ClassFlags(uint32 flags1);
const char* FieldTypeName(int fieldType);

}
