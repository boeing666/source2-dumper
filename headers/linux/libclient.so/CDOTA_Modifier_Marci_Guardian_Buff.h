#pragma once

class CDOTA_Modifier_Marci_Guardian_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 lifesteal_pct; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1B00, size 0x4, align 4
    int32 max_partner_distance; // offset 0x1B04, size 0x4, align 4
    int32 max_partner_penalty; // offset 0x1B08, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1B0C, size 0x4, align 4
    float32 m_fLifestealPct; // offset 0x1B10, size 0x4, align 4
    float32 m_fDamageAbsorbed; // offset 0x1B14, size 0x4, align 4
    bool m_bActive; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    ParticleIndex_t m_nFxIndex; // offset 0x1B1C, size 0x4, align 255
};
