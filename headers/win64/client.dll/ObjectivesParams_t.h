#pragma once

struct ObjectivesParams_t  // sizeof 0x30, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 m_GoldPerOrb; // offset 0x0, size 0x4, align 4
    float32 m_NearPlayerSplitPct; // offset 0x4, size 0x4, align 4
    int32 m_nTier1GoldKill; // offset 0x8, size 0x4, align 4
    int32 m_nTier1GoldOrbs; // offset 0xC, size 0x4, align 4
    int32 m_nTier2GoldKill; // offset 0x10, size 0x4, align 4
    int32 m_nTier2GoldOrbs; // offset 0x14, size 0x4, align 4
    int32 m_nBaseGuardiansGoldKill; // offset 0x18, size 0x4, align 4
    int32 m_nBaseGuardiansGoldOrbs; // offset 0x1C, size 0x4, align 4
    int32 m_nShrinesGoldKill; // offset 0x20, size 0x4, align 4
    int32 m_nShrinesGoldOrbs; // offset 0x24, size 0x4, align 4
    int32 m_nPatronPhase1GoldKill; // offset 0x28, size 0x4, align 4
    int32 m_nPatronPhase1GoldOrbs; // offset 0x2C, size 0x4, align 4
};
