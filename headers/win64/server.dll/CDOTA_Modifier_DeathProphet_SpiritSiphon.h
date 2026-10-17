#pragma once

class CDOTA_Modifier_DeathProphet_SpiritSiphon : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 flSmoothness; // offset 0x1AA8, size 0x4, align 4
    float32 damage; // offset 0x1AAC, size 0x4, align 4
    float32 damage_pct; // offset 0x1AB0, size 0x4, align 4
    int32 drain_range; // offset 0x1AB4, size 0x4, align 4
    float32 haunt_duration; // offset 0x1AB8, size 0x4, align 4
    int32 siphon_buffer; // offset 0x1ABC, size 0x4, align 4
    int32 movement_steal; // offset 0x1AC0, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AC4, size 0x4, align 4
    ParticleIndex_t m_iLinkIndex; // offset 0x1AC8, size 0x4, align 255
    int32 m_nSelfBuffSerialNumber; // offset 0x1ACC, size 0x4, align 4
    int32 m_nTargetDebuffSerialNumber; // offset 0x1AD0, size 0x4, align 4
    bool m_bAppliedFear; // offset 0x1AD4, size 0x1, align 1
    char _pad_1AD5[0x3]; // offset 0x1AD5
    float32 shard_fear_duration; // offset 0x1AD8, size 0x4, align 4
    float32 shard_consecutive_siphon_duration; // offset 0x1ADC, size 0x4, align 4
};
