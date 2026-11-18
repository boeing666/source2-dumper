#pragma once

class CDOTA_Modifier_SkeletonKing_SpectralBladeIntrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 vampiric_aura; // offset 0x1AF8, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1AFC, size 0x4, align 4
    float32 cursed_damage; // offset 0x1B00, size 0x4, align 4
    float32 cursed_damage_pct; // offset 0x1B04, size 0x4, align 4
    float32 curse_cooldown; // offset 0x1B08, size 0x4, align 4
    float32 curse_cooldown_creep; // offset 0x1B0C, size 0x4, align 4
    float32 curse_delay; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
