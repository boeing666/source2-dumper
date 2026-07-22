#pragma once

class C_DOTA_Ability_Invoker_ForgeSpirit : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x830]; // offset 0x0
    float32 spirit_damage; // offset 0x830, size 0x4, align 4
    int32 spirit_mana; // offset 0x834, size 0x4, align 4
    int32 spirit_armor; // offset 0x838, size 0x4, align 4
    float32 spirit_attack_range; // offset 0x83C, size 0x4, align 4
    int32 spirit_hp; // offset 0x840, size 0x4, align 4
    int32 spirit_level; // offset 0x844, size 0x4, align 4
    float32 spirit_duration; // offset 0x848, size 0x4, align 4
    float32 armor_per_attack; // offset 0x84C, size 0x4, align 4
};
