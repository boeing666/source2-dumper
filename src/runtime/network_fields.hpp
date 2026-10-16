#pragma once

#include <string>
#include <unordered_set>

class CNetworkSerializerCodeGenDatabase;

namespace schema {

// "Class::field" for every networked field in the server's codegen database (empty for null).
std::unordered_set<std::string> CollectNetworkFields(CNetworkSerializerCodeGenDatabase* db);

}
