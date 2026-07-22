#pragma once

class CDOTA_Modifier_Juggernaut_Omnislash : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastTarget; // offset 0x1A5C, size 0x4, align 4
    int32 m_nJumps; // offset 0x1A60, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A64, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A68, size 0x4, align 4
    float32 omni_slash_radius; // offset 0x1A6C, size 0x4, align 4
    float32 attack_rate_multiplier; // offset 0x1A70, size 0x4, align 4
    bool m_bFirstHit; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    int32 m_iTotalDamage; // offset 0x1A78, size 0x4, align 4
    int32 m_iHeroDamage; // offset 0x1A7C, size 0x4, align 4
    int32 m_iKilledHeroes; // offset 0x1A80, size 0x4, align 4
    GameTime_t m_fNextAttackTime; // offset 0x1A84, size 0x4, align 255
    bool m_bScepterCast; // offset 0x1A88, size 0x1, align 1
    bool m_bReflection; // offset 0x1A89, size 0x1, align 1
    bool m_bEndNext; // offset 0x1A8A, size 0x1, align 1
    char _pad_1A8B[0x5]; // offset 0x1A8B
};
