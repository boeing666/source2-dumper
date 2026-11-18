#pragma once

class CDOTA_Modifier_Bloodseeker_Rupture : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 movement_damage_pct; // offset 0x1AF8, size 0x4, align 4
    float32 hp_pct; // offset 0x1AFC, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1B00, size 0xC, align 4
    bool bResetPosition; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    float32 knockback; // offset 0x1B10, size 0x4, align 4
    float32 knockback_duration; // offset 0x1B14, size 0x4, align 4
    float32 m_fAccumulatedDamage; // offset 0x1B18, size 0x4, align 4
    ParticleIndex_t m_nDurationEffect; // offset 0x1B1C, size 0x4, align 255
};
