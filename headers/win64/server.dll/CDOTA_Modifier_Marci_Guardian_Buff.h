#pragma once

class CDOTA_Modifier_Marci_Guardian_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 lifesteal_pct; // offset 0x1A78, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1A80, size 0x4, align 4
    int32 max_partner_distance; // offset 0x1A84, size 0x4, align 4
    int32 max_partner_penalty; // offset 0x1A88, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1A8C, size 0x4, align 4
    float32 m_fLifestealPct; // offset 0x1A90, size 0x4, align 4
    float32 m_fDamageAbsorbed; // offset 0x1A94, size 0x4, align 4
    bool m_bActive; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x3]; // offset 0x1A99
    ParticleIndex_t m_nFxIndex; // offset 0x1A9C, size 0x4, align 255
    CHandle< CBaseEntity > m_hPartner; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
