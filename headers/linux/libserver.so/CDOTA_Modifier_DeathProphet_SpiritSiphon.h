#pragma once

class CDOTA_Modifier_DeathProphet_SpiritSiphon : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 flSmoothness; // offset 0x1AF8, size 0x4, align 4
    float32 damage; // offset 0x1AFC, size 0x4, align 4
    float32 max_health_damage_pct; // offset 0x1B00, size 0x4, align 4
    int32 drain_range; // offset 0x1B04, size 0x4, align 4
    float32 haunt_duration; // offset 0x1B08, size 0x4, align 4
    int32 siphon_buffer; // offset 0x1B0C, size 0x4, align 4
    int32 attack_slow; // offset 0x1B10, size 0x4, align 4
    int32 movement_slow; // offset 0x1B14, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B18, size 0x4, align 4
    bool m_bIsHeroTarget; // offset 0x1B1C, size 0x1, align 1
    char _pad_1B1D[0x3]; // offset 0x1B1D
    ParticleIndex_t m_iLinkIndex; // offset 0x1B20, size 0x4, align 255
    int32 m_nSelfBuffSerialNumber; // offset 0x1B24, size 0x4, align 4
    int32 m_nTargetDebuffSerialNumber; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
};
