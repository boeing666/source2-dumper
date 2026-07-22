#pragma once

class CCitadelGameRulesProxy : public CGameRulesProxy /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CCitadelGameRules* m_pGameRules; // offset 0x4A0, size 0x8, align 8 | MNetworkEnable MNetworkTypeAlias MNetworkPriority
};
