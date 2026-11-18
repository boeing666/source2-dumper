#pragma once

class CDOTA_Modifier_Pugna_LifeDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 life_drain; // offset 0x1AF8, size 0x4, align 4
    float32 health_drain_death_boost; // offset 0x1AFC, size 0x4, align 4
    float32 tick_rate; // offset 0x1B00, size 0x4, align 4
    bool m_bDoRangeCheck; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    ParticleIndex_t m_nFXIndex; // offset 0x1B08, size 0x4, align 255
    GameTime_t m_flElapsedTime; // offset 0x1B0C, size 0x4, align 255
    bool m_bPrimary; // offset 0x1B10, size 0x1, align 1
    bool m_bShard; // offset 0x1B11, size 0x1, align 1
    bool m_bFromWard; // offset 0x1B12, size 0x1, align 1
    char _pad_1B13[0x1]; // offset 0x1B13
    CHandle< CBaseEntity > m_hWard; // offset 0x1B14, size 0x4, align 4
    CHandle< CBaseEntity > m_hDrainer; // offset 0x1B18, size 0x4, align 4
    int32 m_nDrainID; // offset 0x1B1C, size 0x4, align 4
    float32 spell_amp_drain_duration; // offset 0x1B20, size 0x4, align 4
    int32 max_spell_amp_drain_pct; // offset 0x1B24, size 0x4, align 4
    int32 spell_amp_drain_rate; // offset 0x1B28, size 0x4, align 4
    int32 spell_amp_drain_rate_ward; // offset 0x1B2C, size 0x4, align 4
    int32 spell_amp_drain_max; // offset 0x1B30, size 0x4, align 4
    int32 health_to_mana_rate; // offset 0x1B34, size 0x4, align 4
};
