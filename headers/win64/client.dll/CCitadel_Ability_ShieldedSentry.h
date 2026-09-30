#pragma once

class CCitadel_Ability_ShieldedSentry : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x20B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    int32 k_nOldestSentriesToShowInUI; // offset 0x16D8, size 0x4, align 4
    char _pad_16DC[0x1C]; // offset 0x16DC
    C_NetworkUtlVectorBase< CHandle< C_NPC_ShieldedSentry > > m_vecDeployedSentries; // offset 0x16F8, size 0x18, align 8
    char _pad_1710[0x9A0]; // offset 0x1710
};
