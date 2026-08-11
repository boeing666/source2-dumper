#pragma once

class CDOTA_Modifier_Item_Prophets_Pendulum : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 delay_pct; // offset 0x1A78, size 0x4, align 4
    float32 delay_time; // offset 0x1A7C, size 0x4, align 4
    float32 damage_interval; // offset 0x1A80, size 0x4, align 4
    float32 m_flDamageMultiplier; // offset 0x1A84, size 0x4, align 4
    bool m_bApplyingDelayedDamage; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x1F]; // offset 0x1A89
};
