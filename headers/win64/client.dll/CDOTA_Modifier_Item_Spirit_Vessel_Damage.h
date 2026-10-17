#pragma once

class CDOTA_Modifier_Item_Spirit_Vessel_Damage : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 restoration_reduction_enemy; // offset 0x1AA8, size 0x4, align 4
    int32 soul_damage_amount; // offset 0x1AAC, size 0x4, align 4
    float32 enemy_hp_drain; // offset 0x1AB0, size 0x4, align 4
    int32 enemy_slow_pct; // offset 0x1AB4, size 0x4, align 4
};
