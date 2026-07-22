#pragma once

class C_DOTA_Ability_Invoker_ForgeSpirit : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B8]; // offset 0x0
    float32 spirit_damage; // offset 0x6B8, size 0x4, align 4
    int32 spirit_mana; // offset 0x6BC, size 0x4, align 4
    int32 spirit_armor; // offset 0x6C0, size 0x4, align 4
    float32 spirit_attack_range; // offset 0x6C4, size 0x4, align 4
    int32 spirit_hp; // offset 0x6C8, size 0x4, align 4
    int32 spirit_level; // offset 0x6CC, size 0x4, align 4
    float32 spirit_duration; // offset 0x6D0, size 0x4, align 4
    float32 armor_per_attack; // offset 0x6D4, size 0x4, align 4
};
