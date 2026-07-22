#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    Vector m_vTargetPos; // offset 0x1A58, size 0xC, align 4
    CHandle< C_BaseEntity > m_hAttackTarget; // offset 0x1A64, size 0x4, align 4
    float32 attack_speed; // offset 0x1A68, size 0x4, align 4
    float32 final_radius; // offset 0x1A6C, size 0x4, align 4
    float32 third_radius; // offset 0x1A70, size 0x4, align 4
    float32 second_radius; // offset 0x1A74, size 0x4, align 4
    int32 outer_attack_buffer; // offset 0x1A78, size 0x4, align 4
    int32 attack_speed_pct; // offset 0x1A7C, size 0x4, align 4
    int32 damage_pct; // offset 0x1A80, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1A84, size 0x4, align 4
    bool m_bDisarmed; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    GameTime_t m_flNextAttackTime; // offset 0x1A8C, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1A90, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
};
