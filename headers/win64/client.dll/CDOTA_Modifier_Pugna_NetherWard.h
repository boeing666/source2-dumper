#pragma once

class CDOTA_Modifier_Pugna_NetherWard : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CNewParticleEffect* m_pRadiusFX; // offset 0x1AF8, size 0x8, align 8
    float32 radius; // offset 0x1B00, size 0x4, align 4
    float32 mana_multiplier; // offset 0x1B04, size 0x4, align 4
    float32 mana_drained_per_attack; // offset 0x1B08, size 0x4, align 4
    int32 attacks_to_destroy; // offset 0x1B0C, size 0x4, align 4
    int32 health_restore_pct; // offset 0x1B10, size 0x4, align 4
    int32 mana_restore_pct; // offset 0x1B14, size 0x4, align 4
    float32 self_restoration_range; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
