#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    Vector m_vTargetPos; // offset 0x1A78, size 0xC, align 4
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0x1A84, size 0x4, align 4
    float32 attack_speed; // offset 0x1A88, size 0x4, align 4
    float32 final_radius; // offset 0x1A8C, size 0x4, align 4
    float32 third_radius; // offset 0x1A90, size 0x4, align 4
    float32 second_radius; // offset 0x1A94, size 0x4, align 4
    int32 outer_attack_buffer; // offset 0x1A98, size 0x4, align 4
    int32 attack_speed_pct; // offset 0x1A9C, size 0x4, align 4
    int32 damage_pct; // offset 0x1AA0, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x1AA4, size 0x4, align 4
    bool m_bDisarmed; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    GameTime_t m_flNextAttackTime; // offset 0x1AAC, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1AB0, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
};
