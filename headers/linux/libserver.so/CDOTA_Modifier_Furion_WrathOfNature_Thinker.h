#pragma once

class CDOTA_Modifier_Furion_WrathOfNature_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage; // offset 0x1A78, size 0x4, align 4
    int32 max_targets; // offset 0x1A7C, size 0x4, align 4
    int32 damage_percent_add; // offset 0x1A80, size 0x4, align 4
    float32 jump_delay; // offset 0x1A84, size 0x4, align 4
    int32 m_iFixedDamage; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_flLastTickTime; // offset 0x1A8C, size 0x4, align 255
    float32 m_flTimeAccumulator; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
    CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // offset 0x1A98, size 0x18, align 8
    int32 m_nBaseDamage; // offset 0x1AB0, size 0x4, align 4
    int32 m_nMaxTargets; // offset 0x1AB4, size 0x4, align 4
    float32 m_flJumpDelay; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
