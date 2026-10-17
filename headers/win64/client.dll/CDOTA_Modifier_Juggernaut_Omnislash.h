#pragma once

class CDOTA_Modifier_Juggernaut_Omnislash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastTarget; // offset 0x1AAC, size 0x4, align 4
    int32 m_nJumps; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AB4, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AB8, size 0x4, align 4
    float32 omni_slash_radius; // offset 0x1ABC, size 0x4, align 4
    float32 attack_rate_multiplier; // offset 0x1AC0, size 0x4, align 4
    bool m_bFirstHit; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    int32 m_iTotalDamage; // offset 0x1AC8, size 0x4, align 4
    int32 m_iHeroDamage; // offset 0x1ACC, size 0x4, align 4
    int32 m_iKilledHeroes; // offset 0x1AD0, size 0x4, align 4
    GameTime_t m_fNextAttackTime; // offset 0x1AD4, size 0x4, align 255
    bool m_bScepterCast; // offset 0x1AD8, size 0x1, align 1
    bool m_bReflection; // offset 0x1AD9, size 0x1, align 1
    bool m_bEndNext; // offset 0x1ADA, size 0x1, align 1
    char _pad_1ADB[0x5]; // offset 0x1ADB
};
