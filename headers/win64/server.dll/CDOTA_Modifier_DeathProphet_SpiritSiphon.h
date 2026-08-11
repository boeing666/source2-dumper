#pragma once

class CDOTA_Modifier_DeathProphet_SpiritSiphon : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 flSmoothness; // offset 0x1A78, size 0x4, align 4
    float32 damage; // offset 0x1A7C, size 0x4, align 4
    float32 damage_pct; // offset 0x1A80, size 0x4, align 4
    int32 drain_range; // offset 0x1A84, size 0x4, align 4
    float32 haunt_duration; // offset 0x1A88, size 0x4, align 4
    int32 siphon_buffer; // offset 0x1A8C, size 0x4, align 4
    int32 movement_steal; // offset 0x1A90, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t m_iLinkIndex; // offset 0x1A98, size 0x4, align 255
    int32 m_nSelfBuffSerialNumber; // offset 0x1A9C, size 0x4, align 4
    int32 m_nTargetDebuffSerialNumber; // offset 0x1AA0, size 0x4, align 4
    bool m_bAppliedFear; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
    float32 shard_fear_duration; // offset 0x1AA8, size 0x4, align 4
    float32 shard_consecutive_siphon_duration; // offset 0x1AAC, size 0x4, align 4
};
