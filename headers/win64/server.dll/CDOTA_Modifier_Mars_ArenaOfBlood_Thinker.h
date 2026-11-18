#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 formation_time; // offset 0x1AFC, size 0x4, align 4
    float32 m_flInitialZ; // offset 0x1B00, size 0x4, align 4
    float32 m_flFinalZ; // offset 0x1B04, size 0x4, align 4
    char _pad_1B08[0x28]; // offset 0x1B08
    bool m_bCaughtOne; // offset 0x1B30, size 0x1, align 1
    bool m_bKilledOne; // offset 0x1B31, size 0x1, align 1
    char _pad_1B32[0x6]; // offset 0x1B32
    CUtlVector< CHandle< CBaseEntity > > m_vecVisionBlockers; // offset 0x1B38, size 0x18, align 8
};
