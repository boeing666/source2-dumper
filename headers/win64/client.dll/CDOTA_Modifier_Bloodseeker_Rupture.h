#pragma once

class CDOTA_Modifier_Bloodseeker_Rupture : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 movement_damage_pct; // offset 0x1AA8, size 0x4, align 4
    float32 hp_pct; // offset 0x1AAC, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1AB0, size 0xC, align 4
    bool bResetPosition; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 knockback; // offset 0x1AC0, size 0x4, align 4
    float32 knockback_duration; // offset 0x1AC4, size 0x4, align 4
    float32 m_fAccumulatedDamage; // offset 0x1AC8, size 0x4, align 4
    ParticleIndex_t m_nDurationEffect; // offset 0x1ACC, size 0x4, align 255
};
