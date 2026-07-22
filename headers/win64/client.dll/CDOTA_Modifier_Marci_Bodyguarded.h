#pragma once

class CDOTA_Modifier_Marci_Bodyguarded : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bodyguard_attack_range_buffer; // offset 0x1A58, size 0x4, align 4
    float32 lifesteal_pct; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A60, size 0x4, align 4
    int32 max_partner_penalty; // offset 0x1A64, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1A68, size 0x4, align 4
    int32 shared_healing_percent; // offset 0x1A6C, size 0x4, align 4
    float32 shared_barrier; // offset 0x1A70, size 0x4, align 4
    float32 shared_barrier_replenish_amount; // offset 0x1A74, size 0x4, align 4
    float32 counter_cooldown; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_flLastCounterTime; // offset 0x1A7C, size 0x4, align 255
    bool bHasCountered; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    int32 m_nDamageAbsorbed; // offset 0x1A84, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
