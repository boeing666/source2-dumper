#include "network_fields.hpp"
#include "appsystem.hpp"

#include <cstdio>
#include <string>
#include <unordered_set>
#include <vector>

#include <dynlibutils/module.hpp>
#include <networksystem/inetworkserializer.h>

namespace schema {
using DynLibUtils::CModule;

// The game builds the codegen DB during Connect (see appsystem.cpp); read it via SDK types.
static void ReadCodegenDatabase(CNetworkSerializerCodeGenDatabase* db, std::unordered_set<std::string>& out) {
	auto& dict = db->m_ClassInfos;   // CUtlDict<CNetworkSerializerClassInfo*>
	for (auto i = dict.First(); i != dict.InvalidIndex(); i = dict.Next(i)) {
		const CNetworkSerializerClassInfo* c = dict.Element(i);
		if (!c) {
			continue;
		}
		const char* cls = c->m_pszClassName.Get();
		if (!cls || !*cls) {
			continue;
		}
		const auto& fields = c->m_Fields;   // CUtlVector<CNetworkSerializerFieldInfo*>
		for (int k = 0; k < fields.Count(); ++k) {
			const CNetworkSerializerFieldInfo* f = fields[k];
			if (!f) {
				continue;
			}
			if (const char* fn = f->m_pszFieldName.Get(); fn && *fn) {
				out.insert(std::string(cls) + "::" + fn);
			}
		}
	}
}

std::unordered_set<std::string> CollectNetworkFields(std::vector<CModule>& mods) {
	std::unordered_set<std::string> net;
	if (auto db = ConnectAndBuildNetworkDatabase(mods)) {
		ReadCodegenDatabase(db, net);
	}
	std::printf("network: %zu fields (codegen via Connect)\n", net.size());
	return net;
}

} // namespace schema
