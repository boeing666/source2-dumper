#pragma once

class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 self_slow; // offset 0x1AA8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AAC, size 0x4, align 255
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AB0, size 0x4, align 4
    bool m_bFetchingRune; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    VectorWS m_vPreviousLoc; // offset 0x1AB8, size 0xC, align 4
    int32 drag_distance; // offset 0x1AC4, size 0x4, align 4
    int32 break_distance; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
