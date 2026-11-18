#pragma once

class CDOTA_Modifier_Juggernaut_Omnislash : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastTarget; // offset 0x1AFC, size 0x4, align 4
    int32 m_nJumps; // offset 0x1B00, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B04, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1B08, size 0x4, align 4
    float32 omni_slash_radius; // offset 0x1B0C, size 0x4, align 4
    float32 attack_rate_multiplier; // offset 0x1B10, size 0x4, align 4
    bool m_bFirstHit; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    int32 m_iTotalDamage; // offset 0x1B18, size 0x4, align 4
    int32 m_iHeroDamage; // offset 0x1B1C, size 0x4, align 4
    int32 m_iKilledHeroes; // offset 0x1B20, size 0x4, align 4
    GameTime_t m_fNextAttackTime; // offset 0x1B24, size 0x4, align 255
    bool m_bScepterCast; // offset 0x1B28, size 0x1, align 1
    bool m_bReflection; // offset 0x1B29, size 0x1, align 1
    bool m_bEndNext; // offset 0x1B2A, size 0x1, align 1
    char _pad_1B2B[0x5]; // offset 0x1B2B
};
