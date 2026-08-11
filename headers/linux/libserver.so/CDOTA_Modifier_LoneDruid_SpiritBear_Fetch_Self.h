#pragma once

class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 self_slow; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A80, size 0x4, align 4
    bool m_bFetchingRune; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    VectorWS m_vPreviousLoc; // offset 0x1A88, size 0xC, align 4
    int32 drag_distance; // offset 0x1A94, size 0x4, align 4
    int32 break_distance; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
