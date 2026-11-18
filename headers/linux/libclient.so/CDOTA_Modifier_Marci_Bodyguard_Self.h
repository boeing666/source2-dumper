#pragma once

class CDOTA_Modifier_Marci_Bodyguard_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 lifesteal_pct; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AFC, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1B00, size 0x4, align 4
    int32 shared_healing_percent; // offset 0x1B04, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
