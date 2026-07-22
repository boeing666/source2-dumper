#pragma once

class C_CitadelGameRulesProxy : public C_GameRulesProxy /*0x0*/  // sizeof 0x5F8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    C_CitadelGameRules* m_pGameRules; // offset 0x5F0, size 0x8, align 8 | MNetworkEnable MNetworkTypeAlias MNetworkPriority
};
