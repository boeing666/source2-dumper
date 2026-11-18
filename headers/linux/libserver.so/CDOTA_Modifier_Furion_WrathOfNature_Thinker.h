#pragma once

class CDOTA_Modifier_Furion_WrathOfNature_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    int32 max_targets; // offset 0x1AFC, size 0x4, align 4
    int32 damage_percent_add; // offset 0x1B00, size 0x4, align 4
    float32 jump_delay; // offset 0x1B04, size 0x4, align 4
    int32 m_iFixedDamage; // offset 0x1B08, size 0x4, align 4
    GameTime_t m_flLastTickTime; // offset 0x1B0C, size 0x4, align 255
    float32 m_flTimeAccumulator; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // offset 0x1B18, size 0x18, align 8
    int32 m_nBaseDamage; // offset 0x1B30, size 0x4, align 4
    int32 m_nMaxTargets; // offset 0x1B34, size 0x4, align 4
    float32 m_flJumpDelay; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
