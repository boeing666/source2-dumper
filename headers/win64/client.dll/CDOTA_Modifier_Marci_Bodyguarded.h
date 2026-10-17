#pragma once

class CDOTA_Modifier_Marci_Bodyguarded : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bodyguard_attack_range_buffer; // offset 0x1AA8, size 0x4, align 4
    float32 lifesteal_pct; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AB0, size 0x4, align 4
    int32 max_partner_penalty; // offset 0x1AB4, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1AB8, size 0x4, align 4
    int32 shared_healing_percent; // offset 0x1ABC, size 0x4, align 4
    float32 shared_barrier; // offset 0x1AC0, size 0x4, align 4
    float32 shared_barrier_replenish_amount; // offset 0x1AC4, size 0x4, align 4
    float32 counter_cooldown; // offset 0x1AC8, size 0x4, align 4
    GameTime_t m_flLastCounterTime; // offset 0x1ACC, size 0x4, align 255
    bool bHasCountered; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    int32 m_nDamageAbsorbed; // offset 0x1AD4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1AD8, size 0x4, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
