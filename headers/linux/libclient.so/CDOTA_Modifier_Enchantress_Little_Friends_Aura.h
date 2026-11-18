#pragma once

class CDOTA_Modifier_Enchantress_Little_Friends_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    int32 m_nAlliesTaunted; // offset 0x1AFC, size 0x4, align 4
    bool m_bRelicTriggered; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    float32 radius; // offset 0x1B04, size 0x4, align 4
    int32 damage_amplification; // offset 0x1B08, size 0x4, align 4
    int32 damage_reduction; // offset 0x1B0C, size 0x4, align 4
    float32 root_base_duration; // offset 0x1B10, size 0x4, align 4
    float32 root_per_target; // offset 0x1B14, size 0x4, align 4
    float32 max_root; // offset 0x1B18, size 0x4, align 4
    GameTime_t m_flLastSeen; // offset 0x1B1C, size 0x4, align 255
};
