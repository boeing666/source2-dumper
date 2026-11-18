#pragma once

class CDOTA_Modifier_Spirit_Bear_Attack_Damage : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bear_bat; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_bear_hp; // offset 0x1AFC, size 0x4, align 4
    int32 bear_movespeed; // offset 0x1B00, size 0x4, align 4
    int32 bonus_bear_armor; // offset 0x1B04, size 0x4, align 4
    int32 hp_gain_per_druid_level; // offset 0x1B08, size 0x4, align 4
    int32 damage_gain_per_druid_level; // offset 0x1B0C, size 0x4, align 4
    float32 model_scale; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
