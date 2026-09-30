#pragma once

class CNPC_Neutral_SinnersSacrifice : public CNPC_TrooperNeutral /*0x0*/  // sizeof 0x1AF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x17E0]; // offset 0x0
    int32 m_iVaultState; // offset 0x17E0, size 0x4, align 4
    int32 m_nGoldToGiveOnDamage; // offset 0x17E4, size 0x4, align 4
    float32 m_flRandomTimePhase; // offset 0x17E8, size 0x4, align 4
    float32 m_flMiniGameTimeScale; // offset 0x17EC, size 0x4, align 4
    char _pad_17F0[0x300]; // offset 0x17F0
};
