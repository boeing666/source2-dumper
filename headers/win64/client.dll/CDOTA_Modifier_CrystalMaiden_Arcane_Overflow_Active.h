#pragma once

class CDOTA_Modifier_CrystalMaiden_Arcane_Overflow_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 mana_battery_radius; // offset 0x1AA8, size 0x4, align 4
    float32 mana_battery_mana_pct; // offset 0x1AAC, size 0x4, align 4
    float32 activation_mana_cost_increase_pct; // offset 0x1AB0, size 0x4, align 4
    float32 activation_spell_amp_pct; // offset 0x1AB4, size 0x4, align 4
};
