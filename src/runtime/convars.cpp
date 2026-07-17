#include "runtime/convars.hpp"
#include "runtime/appsystem.hpp"

#include <print>
#include <string>
#include <utility>
#include <vector>

#include <icvar.h>
#include <tier1/convar.h>

namespace schema {

namespace {

const std::pair<uint64_t, const char*> kFcvarFlags[] = {
	{ FCVAR_LINKED_CONCOMMAND, "linked_concommand" }, { FCVAR_DEVELOPMENTONLY, "developmentonly" },
	{ FCVAR_GAMEDLL, "gamedll" }, { FCVAR_CLIENTDLL, "clientdll" }, { FCVAR_HIDDEN, "hidden" },
	{ FCVAR_PROTECTED, "protected" }, { FCVAR_SPONLY, "sponly" }, { FCVAR_REFERENCE, "reference" },
	{ FCVAR_UNLOGGED, "unlogged" }, { FCVAR_INITIAL_SETVALUE, "initial_setvalue" },
	{ FCVAR_REPLICATED, "replicated" }, { FCVAR_CHEAT, "cheat" }, { FCVAR_PER_USER, "per_user" },
	{ FCVAR_DEMO, "demo" }, { FCVAR_DONTRECORD, "dontrecord" },
	{ FCVAR_PERFORMING_CALLBACKS, "performing_callbacks" }, { FCVAR_RELEASE, "release" },
	{ FCVAR_MENUBAR_ITEM, "menubar_item" }, { FCVAR_COMMANDLINE_ENFORCED, "commandline_enforced" },
	{ FCVAR_NOT_CONNECTED, "not_connected" }, { FCVAR_VCONSOLE_FUZZY_MATCHING, "vconsole_fuzzy_matching" },
	{ FCVAR_SERVER_CAN_EXECUTE, "server_can_execute" }, { FCVAR_CLIENT_CAN_EXECUTE, "client_can_execute" },
	{ FCVAR_SERVER_CANNOT_QUERY, "server_cannot_query" }, { FCVAR_VCONSOLE_SET_FOCUS, "vconsole_set_focus" },
	{ FCVAR_CLIENTCMD_CAN_EXECUTE, "clientcmd_can_execute" }, { FCVAR_EXECUTE_PER_TICK, "execute_per_tick" },
	{ FCVAR_DEFENSIVE, "defensive" },
};

std::vector<std::string> DecodeFcvar(uint64_t flags) {
	std::vector<std::string> out;
	for (const auto& [bit, name] : kFcvarFlags) {
		if (flags & bit) {
			out.emplace_back(name);
		}
	}
	return out;
}

std::string CvarValueStr(EConVarType type, const CVValue_t* v) {
	if (!v) {
		return {};
	}
	switch (type) {
		case EConVarType_Bool:    return v->m_bValue ? "true" : "false";
		case EConVarType_Int16:   return std::to_string(v->m_i16Value);
		case EConVarType_UInt16:  return std::to_string(v->m_u16Value);
		case EConVarType_Int32:   return std::to_string(v->m_i32Value);
		case EConVarType_UInt32:  return std::to_string(v->m_u32Value);
		case EConVarType_Int64:   return std::to_string(v->m_i64Value);
		case EConVarType_UInt64:  return std::to_string(v->m_u64Value);
		case EConVarType_Float32: return std::to_string(v->m_fl32Value);
		case EConVarType_Float64: return std::to_string(v->m_fl64Value);
		case EConVarType_String:  return v->m_StringValue.Get() ? v->m_StringValue.Get() : "";
		default:                  return {};
	}
}

}

void CollectConVars(std::vector<ConVarInfo>& convars, std::vector<ConCommandInfo>& concommands) {
	auto impl = static_cast<CCvar*>(g_pCVar);

	for (int i = 0; i < impl->m_ConVarCount; ++i) {
		ConVarData* d = impl->GetConVarData(ConVarRef(static_cast<uint16>(i)));
		if (!d || !d->GetName()) {
			continue;
		}

		const EConVarType t = d->GetType();
		ConVarInfo ci;
		ci.name = d->GetName();
		ci.type = (t > EConVarType_Invalid && t < EConVarType_MAX && d->GetDataTypeName()) ? d->GetDataTypeName() : "";
		ci.help = d->GetHelpText() ? d->GetHelpText() : "";
		ci.flagsRaw = d->GetFlags();
		ci.flags = DecodeFcvar(ci.flagsRaw);

		if (d->HasDefaultValue()) {
			ci.defaultValue = CvarValueStr(t, d->DefaultValue());
		}
		if (d->HasMinValue()) {
			ci.minValue = CvarValueStr(t, d->MinValue());
		}
		if (d->HasMaxValue()) {
			ci.maxValue = CvarValueStr(t, d->MaxValue());
		}

		convars.push_back(std::move(ci));
	}

	for (int i = 0; i < impl->m_ConCommandCount; ++i) {
		ConCommandData* d = impl->GetConCommandData(ConCommandRef(static_cast<uint16>(i)));
		if (!d || !d->GetName()) {
			continue;
		}

		ConCommandInfo cc;
		cc.name = d->GetName();
		cc.help = d->GetHelpText() ? d->GetHelpText() : "";
		cc.flagsRaw = d->GetFlags();
		cc.flags = DecodeFcvar(cc.flagsRaw);
		concommands.push_back(std::move(cc));
	}

	std::println("convars: {} / concommands: {}", convars.size(), concommands.size());
}

}
