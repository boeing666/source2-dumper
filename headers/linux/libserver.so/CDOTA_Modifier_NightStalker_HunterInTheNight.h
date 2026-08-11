#pragma once

class CDOTA_Modifier_NightStalker_HunterInTheNight : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_movement_speed_pct_night; // offset 0x1A78, size 0x4, align 4
    int32 bonus_attack_speed_night; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_status_resist_night; // offset 0x1A80, size 0x4, align 4
    int32 reset_cooldowns; // offset 0x1A84, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A88, size 0x4, align 255
    bool m_bIsDay; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
};
