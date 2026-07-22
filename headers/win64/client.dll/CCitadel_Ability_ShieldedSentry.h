#pragma once

class CCitadel_Ability_ShieldedSentry : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1910, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    int32 k_nOldestSentriesToShowInUI; // offset 0x11D8, size 0x4, align 4
    char _pad_11DC[0x1C]; // offset 0x11DC
    C_NetworkUtlVectorBase< CHandle< C_NPC_SimpleAnimatingAI > > m_vecDeployedSentries; // offset 0x11F8, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    char _pad_1210[0x700]; // offset 0x1210
};
