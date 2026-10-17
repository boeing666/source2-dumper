#pragma once

class CDOTA_Modifier_NightStalker_HunterInTheNight : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_movement_speed_pct_night; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_attack_speed_night; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_status_resist_night; // offset 0x1AB0, size 0x4, align 4
    int32 reset_cooldowns; // offset 0x1AB4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB8, size 0x4, align 255
    bool m_bIsDay; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
};
