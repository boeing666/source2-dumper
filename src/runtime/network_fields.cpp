#include "runtime/network_fields.hpp"

#include <print>
#include <string>
#include <unordered_set>

#include "core/sdk.hpp"

namespace schema {

namespace {

void ReadCodegenDatabase(CNetworkSerializerCodeGenDatabase* db, std::unordered_set<std::string>& out) {
	auto& dict = db->m_ClassInfos;
	for (auto i = dict.First(); i != dict.InvalidIndex(); i = dict.Next(i)) {
		const CNetworkSerializerClassInfo* c = dict.Element(i);
		if (!c) {
			continue;
		}
		const char* cls = c->m_pszClassName;
		if (!cls || !*cls) {
			continue;
		}
		const auto& fields = c->m_Fields;
		for (int k = 0; k < fields.Count(); ++k) {
			const CNetworkSerializerFieldInfo* f = fields[k];
			if (!f) {
				continue;
			}
			if (const char* fn = f->m_pszFieldName; fn && *fn) {
				out.insert(std::string(cls) + "::" + fn);
			}
		}
	}
}

}

std::unordered_set<std::string> CollectNetworkFields(CNetworkSerializerCodeGenDatabase* db) {
	std::unordered_set<std::string> net;
	if (db) {
		ReadCodegenDatabase(db, net);
	}

	std::println("network: {} fields (codegen via Connect)", net.size());
	return net;
}

}
