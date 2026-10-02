#pragma once

class C_NPC_Neutral_SinnersSacrifice : public C_NPC_TrooperNeutral /*0x0*/  // sizeof 0x1BD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BA0]; // offset 0x0
    int32 m_iVaultState; // offset 0x1BA0, size 0x4, align 4
    int32 m_nGoldToGiveOnDamage; // offset 0x1BA4, size 0x4, align 4
    float32 m_flRandomTimePhase; // offset 0x1BA8, size 0x4, align 4
    float32 m_flMiniGameTimeScale; // offset 0x1BAC, size 0x4, align 4
    char _pad_1BB0[0x28]; // offset 0x1BB0
};
