#pragma once

class C_NPC_Neutral_SinnersSacrifice : public C_NPC_TrooperNeutral /*0x0*/  // sizeof 0x1B80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B48]; // offset 0x0
    int32 m_iVaultState; // offset 0x1B48, size 0x4, align 4
    int32 m_nGoldToGiveOnDamage; // offset 0x1B4C, size 0x4, align 4
    float32 m_flRandomTimePhase; // offset 0x1B50, size 0x4, align 4
    float32 m_flMiniGameTimeScale; // offset 0x1B54, size 0x4, align 4
    char _pad_1B58[0x28]; // offset 0x1B58
};
