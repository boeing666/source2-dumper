#pragma once

class CDOTA_Ability_Invoker_ForgeSpirit : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x868]; // offset 0x0
    float32 spirit_damage; // offset 0x868, size 0x4, align 4
    int32 spirit_mana; // offset 0x86C, size 0x4, align 4
    int32 spirit_armor; // offset 0x870, size 0x4, align 4
    float32 spirit_attack_range; // offset 0x874, size 0x4, align 4
    int32 spirit_hp; // offset 0x878, size 0x4, align 4
    int32 spirit_level; // offset 0x87C, size 0x4, align 4
    float32 spirit_duration; // offset 0x880, size 0x4, align 4
    float32 armor_per_attack; // offset 0x884, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecSpirits; // offset 0x888, size 0x18, align 8
};
