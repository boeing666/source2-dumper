#pragma once

class CDOTA_Modifier_Juggernaut_Omnislash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastTarget; // offset 0x1A7C, size 0x4, align 4
    int32 m_nJumps; // offset 0x1A80, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A84, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A88, size 0x4, align 4
    float32 omni_slash_radius; // offset 0x1A8C, size 0x4, align 4
    float32 attack_rate_multiplier; // offset 0x1A90, size 0x4, align 4
    bool m_bFirstHit; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    int32 m_iTotalDamage; // offset 0x1A98, size 0x4, align 4
    int32 m_iHeroDamage; // offset 0x1A9C, size 0x4, align 4
    int32 m_iKilledHeroes; // offset 0x1AA0, size 0x4, align 4
    GameTime_t m_fNextAttackTime; // offset 0x1AA4, size 0x4, align 255
    bool m_bScepterCast; // offset 0x1AA8, size 0x1, align 1
    bool m_bReflection; // offset 0x1AA9, size 0x1, align 1
    bool m_bEndNext; // offset 0x1AAA, size 0x1, align 1
    char _pad_1AAB[0x5]; // offset 0x1AAB
};
