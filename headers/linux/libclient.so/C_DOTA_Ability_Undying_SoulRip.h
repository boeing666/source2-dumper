#pragma once

class C_DOTA_Ability_Undying_SoulRip : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 damage_per_unit; // offset 0x824, size 0x4, align 4
    float32 radius; // offset 0x828, size 0x4, align 4
    int32 max_units; // offset 0x82C, size 0x4, align 4
    int32 tombstone_heal; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
