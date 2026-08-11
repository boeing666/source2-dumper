#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 formation_time; // offset 0x1A7C, size 0x4, align 4
    float32 m_flInitialZ; // offset 0x1A80, size 0x4, align 4
    float32 m_flFinalZ; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x28]; // offset 0x1A88
    bool m_bCaughtOne; // offset 0x1AB0, size 0x1, align 1
    bool m_bKilledOne; // offset 0x1AB1, size 0x1, align 1
    char _pad_1AB2[0x6]; // offset 0x1AB2
    CUtlVector< CHandle< CBaseEntity > > m_vecVisionBlockers; // offset 0x1AB8, size 0x18, align 8
};
