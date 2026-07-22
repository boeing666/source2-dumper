#pragma once

class CDOTA_Modifier_Marci_Guardian_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 lifesteal_pct; // offset 0x1A58, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1A60, size 0x4, align 4
    int32 max_partner_distance; // offset 0x1A64, size 0x4, align 4
    int32 max_partner_penalty; // offset 0x1A68, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1A6C, size 0x4, align 4
    float32 m_fLifestealPct; // offset 0x1A70, size 0x4, align 4
    float32 m_fDamageAbsorbed; // offset 0x1A74, size 0x4, align 4
    bool m_bActive; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    ParticleIndex_t m_nFxIndex; // offset 0x1A7C, size 0x4, align 255
};
