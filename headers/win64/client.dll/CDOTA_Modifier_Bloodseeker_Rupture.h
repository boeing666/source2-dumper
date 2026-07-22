#pragma once

class CDOTA_Modifier_Bloodseeker_Rupture : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 movement_damage_pct; // offset 0x1A58, size 0x4, align 4
    float32 hp_pct; // offset 0x1A5C, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A60, size 0xC, align 4
    bool bResetPosition; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    float32 knockback; // offset 0x1A70, size 0x4, align 4
    float32 knockback_duration; // offset 0x1A74, size 0x4, align 4
    float32 m_fAccumulatedDamage; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_nDurationEffect; // offset 0x1A7C, size 0x4, align 255
};
