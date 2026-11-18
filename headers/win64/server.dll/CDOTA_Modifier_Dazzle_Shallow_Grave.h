#pragma once

class CDOTA_Modifier_Dazzle_Shallow_Grave : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bHasPostedEvent; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    ParticleIndex_t m_nFXIndex; // offset 0x1AFC, size 0x4, align 255
    float32 fx_halo_height; // offset 0x1B00, size 0x4, align 4
    float32 m_flExpirationHeal; // offset 0x1B04, size 0x4, align 4
    int32 heal_amplify; // offset 0x1B08, size 0x4, align 4
    int32 attack_speed_per_missing_health; // offset 0x1B0C, size 0x4, align 4
};
