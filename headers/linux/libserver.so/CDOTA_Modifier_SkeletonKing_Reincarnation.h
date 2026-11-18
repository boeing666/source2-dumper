#pragma once

class CDOTA_Modifier_SkeletonKing_Reincarnation : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 reincarnate_time; // offset 0x1AF8, size 0x4, align 4
    int32 scepter_aura_radius; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_mortal_strike_pct; // offset 0x1B00, size 0x4, align 4
    float32 bonus_mortal_strike_duration; // offset 0x1B04, size 0x4, align 4
    GameTime_t m_fLastReincarnationTime; // offset 0x1B08, size 0x4, align 255
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
