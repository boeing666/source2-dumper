#pragma once

class CDOTA_Modifier_SandKing_SandStorm : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 sand_storm_radius; // offset 0x1AF8, size 0x4, align 4
    int32 sand_storm_damage; // offset 0x1AFC, size 0x4, align 4
    float32 damage_tick_rate; // offset 0x1B00, size 0x4, align 4
    float32 blind_debuff_duration; // offset 0x1B04, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1B08, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex1; // offset 0x1B0C, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex2; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x14]; // offset 0x1B14
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1B28, size 0x4, align 4
    int32 sand_storm_move_speed_pct; // offset 0x1B2C, size 0x4, align 4
    VectorWS vecSpawnPos; // offset 0x1B30, size 0xC, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
