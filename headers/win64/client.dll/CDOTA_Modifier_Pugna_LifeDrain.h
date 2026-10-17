#pragma once

class CDOTA_Modifier_Pugna_LifeDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 health_drain; // offset 0x1AA8, size 0x4, align 4
    int32 ally_healing; // offset 0x1AAC, size 0x4, align 4
    float32 health_drain_death_boost; // offset 0x1AB0, size 0x4, align 4
    float32 tick_rate; // offset 0x1AB4, size 0x4, align 4
    bool m_bDoRangeCheck; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    ParticleIndex_t m_nFXIndex; // offset 0x1ABC, size 0x4, align 255
    GameTime_t m_flElapsedTime; // offset 0x1AC0, size 0x4, align 255
    bool m_bPrimary; // offset 0x1AC4, size 0x1, align 1
    bool m_bShard; // offset 0x1AC5, size 0x1, align 1
    bool m_bFromWard; // offset 0x1AC6, size 0x1, align 1
    char _pad_1AC7[0x1]; // offset 0x1AC7
    CHandle< C_BaseEntity > m_hWard; // offset 0x1AC8, size 0x4, align 4
    float32 spell_amp_drain_duration; // offset 0x1ACC, size 0x4, align 4
    int32 max_spell_amp_drain_pct; // offset 0x1AD0, size 0x4, align 4
    int32 spell_amp_drain_rate; // offset 0x1AD4, size 0x4, align 4
    int32 spell_amp_drain_rate_ward; // offset 0x1AD8, size 0x4, align 4
    int32 spell_amp_drain_max; // offset 0x1ADC, size 0x4, align 4
    int32 health_to_mana_rate; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
