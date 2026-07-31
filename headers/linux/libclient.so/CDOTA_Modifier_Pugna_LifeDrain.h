#pragma once

class CDOTA_Modifier_Pugna_LifeDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 health_drain; // offset 0x1A78, size 0x4, align 4
    int32 ally_healing; // offset 0x1A7C, size 0x4, align 4
    float32 health_drain_death_boost; // offset 0x1A80, size 0x4, align 4
    float32 tick_rate; // offset 0x1A84, size 0x4, align 4
    bool m_bDoRangeCheck; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
    GameTime_t m_flElapsedTime; // offset 0x1A90, size 0x4, align 255
    bool m_bPrimary; // offset 0x1A94, size 0x1, align 1
    bool m_bShard; // offset 0x1A95, size 0x1, align 1
    bool m_bFromWard; // offset 0x1A96, size 0x1, align 1
    char _pad_1A97[0x1]; // offset 0x1A97
    CHandle< C_BaseEntity > m_hWard; // offset 0x1A98, size 0x4, align 4
    float32 spell_amp_drain_duration; // offset 0x1A9C, size 0x4, align 4
    int32 max_spell_amp_drain_pct; // offset 0x1AA0, size 0x4, align 4
    int32 spell_amp_drain_rate; // offset 0x1AA4, size 0x4, align 4
    int32 spell_amp_drain_rate_ward; // offset 0x1AA8, size 0x4, align 4
    int32 spell_amp_drain_max; // offset 0x1AAC, size 0x4, align 4
    int32 health_to_mana_rate; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
