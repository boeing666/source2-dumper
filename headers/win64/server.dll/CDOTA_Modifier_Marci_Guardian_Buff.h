#pragma once

class CDOTA_Modifier_Marci_Guardian_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 lifesteal_pct; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1AB0, size 0x4, align 4
    int32 max_partner_distance; // offset 0x1AB4, size 0x4, align 4
    int32 max_partner_penalty; // offset 0x1AB8, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1ABC, size 0x4, align 4
    float32 m_fLifestealPct; // offset 0x1AC0, size 0x4, align 4
    float32 m_fDamageAbsorbed; // offset 0x1AC4, size 0x4, align 4
    bool m_bActive; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    ParticleIndex_t m_nFxIndex; // offset 0x1ACC, size 0x4, align 255
    CHandle< CBaseEntity > m_hPartner; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
