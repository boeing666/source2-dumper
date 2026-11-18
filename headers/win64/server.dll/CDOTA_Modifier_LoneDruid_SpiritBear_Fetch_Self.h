#pragma once

class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 self_slow; // offset 0x1AF8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AFC, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B00, size 0x4, align 4
    bool m_bFetchingRune; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    VectorWS m_vPreviousLoc; // offset 0x1B08, size 0xC, align 4
    int32 drag_distance; // offset 0x1B14, size 0x4, align 4
    int32 break_distance; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
