#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vTargetPos; // offset 0x1AA8, size 0xC, align 4
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0x1AB4, size 0x4, align 4
    float32 attack_speed; // offset 0x1AB8, size 0x4, align 4
    float32 final_radius; // offset 0x1ABC, size 0x4, align 4
    float32 third_radius; // offset 0x1AC0, size 0x4, align 4
    float32 second_radius; // offset 0x1AC4, size 0x4, align 4
    int32 outer_attack_buffer; // offset 0x1AC8, size 0x4, align 4
    int32 attack_speed_pct; // offset 0x1ACC, size 0x4, align 4
    int32 damage_pct; // offset 0x1AD0, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x1AD4, size 0x4, align 4
    bool m_bDisarmed; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    GameTime_t m_flNextAttackTime; // offset 0x1ADC, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1AE0, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1AE4, size 0x1, align 1
    char _pad_1AE5[0x3]; // offset 0x1AE5
};
