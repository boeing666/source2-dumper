#pragma once

class CDOTA_Modifier_SkeletonKing_Reincarnation : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 reincarnate_time; // offset 0x1A78, size 0x4, align 4
    int32 scepter_aura_radius; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_mortal_strike_pct; // offset 0x1A80, size 0x4, align 4
    float32 bonus_mortal_strike_duration; // offset 0x1A84, size 0x4, align 4
    GameTime_t m_fLastReincarnationTime; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
