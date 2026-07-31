#pragma once

class CDOTA_Modifier_SandKing_SandStorm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 sand_storm_radius; // offset 0x1A78, size 0x4, align 4
    int32 sand_storm_damage; // offset 0x1A7C, size 0x4, align 4
    float32 damage_tick_rate; // offset 0x1A80, size 0x4, align 4
    float32 blind_debuff_duration; // offset 0x1A84, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1A88, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex1; // offset 0x1A8C, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex2; // offset 0x1A90, size 0x4, align 255
    char _pad_1A94[0x14]; // offset 0x1A94
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1AA8, size 0x4, align 4
    int32 sand_storm_move_speed_pct; // offset 0x1AAC, size 0x4, align 4
    VectorWS vecSpawnPos; // offset 0x1AB0, size 0xC, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
