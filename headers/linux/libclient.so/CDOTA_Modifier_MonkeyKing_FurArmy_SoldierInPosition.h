#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    Vector m_vTargetPos; // offset 0x1AF8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hAttackTarget; // offset 0x1B04, size 0x4, align 4
    float32 attack_speed; // offset 0x1B08, size 0x4, align 4
    float32 final_radius; // offset 0x1B0C, size 0x4, align 4
    float32 third_radius; // offset 0x1B10, size 0x4, align 4
    float32 second_radius; // offset 0x1B14, size 0x4, align 4
    int32 outer_attack_buffer; // offset 0x1B18, size 0x4, align 4
    int32 attack_speed_pct; // offset 0x1B1C, size 0x4, align 4
    int32 damage_pct; // offset 0x1B20, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1B24, size 0x4, align 4
    bool m_bDisarmed; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x3]; // offset 0x1B29
    GameTime_t m_flNextAttackTime; // offset 0x1B2C, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1B30, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1B34, size 0x1, align 1
    char _pad_1B35[0x3]; // offset 0x1B35
};
