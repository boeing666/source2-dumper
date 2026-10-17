#pragma once

class CDOTA_Modifier_Muerta_Revenant_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bSpiritsExplode; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    float32 m_fDeadZoneDistance; // offset 0x1AAC, size 0x4, align 4
    float32 m_fDesiredDeadZoneDistance; // offset 0x1AB0, size 0x4, align 4
    float32 damage; // offset 0x1AB4, size 0x4, align 4
    float32 hit_radius; // offset 0x1AB8, size 0x4, align 4
    float32 speed_initial; // offset 0x1ABC, size 0x4, align 4
    float32 speed_max; // offset 0x1AC0, size 0x4, align 4
    float32 acceleration; // offset 0x1AC4, size 0x4, align 4
    float32 kill_check_radius; // offset 0x1AC8, size 0x4, align 4
    float32 kill_radius_expansion; // offset 0x1ACC, size 0x4, align 4
    float32 kill_radius_expansion_speed; // offset 0x1AD0, size 0x4, align 4
    float32 hp_regen_pct; // offset 0x1AD4, size 0x4, align 4
    int32 num_revenants; // offset 0x1AD8, size 0x4, align 4
    int32 rotation_direction; // offset 0x1ADC, size 0x4, align 4
    float32 radius; // offset 0x1AE0, size 0x4, align 4
    float32 rotation_initial; // offset 0x1AE4, size 0x4, align 4
    ParticleIndex_t m_nWarningFX; // offset 0x1AE8, size 0x4, align 255
    char _pad_1AEC[0x4]; // offset 0x1AEC
    CUtlVector< sRevenantDef > m_SpiritDefs; // offset 0x1AF0, size 0x18, align 8
    char _pad_1B08[0x18]; // offset 0x1B08
    CHandle< CBaseEntity > m_hHealingThinker; // offset 0x1B20, size 0x4, align 4
    int32 m_nRevenantImpacts; // offset 0x1B24, size 0x4, align 4
};
