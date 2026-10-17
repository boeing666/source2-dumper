#pragma once

class CDOTA_Modifier_SandKing_SandStorm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 sand_storm_radius; // offset 0x1AA8, size 0x4, align 4
    int32 sand_storm_damage; // offset 0x1AAC, size 0x4, align 4
    float32 damage_tick_rate; // offset 0x1AB0, size 0x4, align 4
    float32 blind_debuff_duration; // offset 0x1AB4, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1AB8, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex1; // offset 0x1ABC, size 0x4, align 255
    ParticleIndex_t m_nSandStormParticleIndex2; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x14]; // offset 0x1AC4
    CHandle< CBaseEntity > m_hThinker; // offset 0x1AD8, size 0x4, align 4
    int32 sand_storm_move_speed_pct; // offset 0x1ADC, size 0x4, align 4
    VectorWS vecSpawnPos; // offset 0x1AE0, size 0xC, align 4
    char _pad_1AEC[0x4]; // offset 0x1AEC
};
