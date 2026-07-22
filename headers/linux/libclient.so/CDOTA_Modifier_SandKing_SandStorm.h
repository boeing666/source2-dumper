#pragma once

class CDOTA_Modifier_SandKing_SandStorm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 sand_storm_radius; // offset 0x1A58, size 0x4, align 4
    int32 sand_storm_damage; // offset 0x1A5C, size 0x4, align 4
    float32 damage_tick_rate; // offset 0x1A60, size 0x4, align 4
    float32 blind_debuff_duration; // offset 0x1A64, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1A68, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex1; // offset 0x1A6C, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex2; // offset 0x1A70, size 0x4, align 255
    char _pad_1A74[0x14]; // offset 0x1A74
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1A88, size 0x4, align 4
    int32 sand_storm_move_speed_pct; // offset 0x1A8C, size 0x4, align 4
    VectorWS vecSpawnPos; // offset 0x1A90, size 0xC, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
