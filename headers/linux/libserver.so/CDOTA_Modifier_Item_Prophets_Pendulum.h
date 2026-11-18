#pragma once

class CDOTA_Modifier_Item_Prophets_Pendulum : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 delay_pct; // offset 0x1AF8, size 0x4, align 4
    float32 delay_time; // offset 0x1AFC, size 0x4, align 4
    float32 damage_interval; // offset 0x1B00, size 0x4, align 4
    float32 m_flDamageMultiplier; // offset 0x1B04, size 0x4, align 4
    bool m_bApplyingDelayedDamage; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x1F]; // offset 0x1B09
};
