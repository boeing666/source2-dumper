#pragma once

struct LockonTarget_t  // sizeof 0x70, align 0xFF [vtable] (server)
{
    char _pad_0000[0x30]; // offset 0x0
    float32 m_flGainRate; // offset 0x30, size 0x4, align 4
    float32 m_flDrainRate; // offset 0x34, size 0x4, align 4
    float32 m_flMaxValue; // offset 0x38, size 0x4, align 4
    int32 m_nPrevFullStacks; // offset 0x3C, size 0x4, align 4
    float32 m_flLatchedValue; // offset 0x40, size 0x4, align 4
    GameTime_t m_flLatchedTime; // offset 0x44, size 0x4, align 255
    ELockonState m_eLockonState; // offset 0x48, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x4C, size 0x4, align 4
    bool m_bHasLOS; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x1F]; // offset 0x51
};
