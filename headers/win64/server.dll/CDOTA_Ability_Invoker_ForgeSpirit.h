#pragma once

class CDOTA_Ability_Invoker_ForgeSpirit : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 spirit_damage; // offset 0x590, size 0x4, align 4
    int32 spirit_mana; // offset 0x594, size 0x4, align 4
    int32 spirit_armor; // offset 0x598, size 0x4, align 4
    float32 spirit_attack_range; // offset 0x59C, size 0x4, align 4
    int32 spirit_hp; // offset 0x5A0, size 0x4, align 4
    int32 spirit_level; // offset 0x5A4, size 0x4, align 4
    float32 spirit_duration; // offset 0x5A8, size 0x4, align 4
    float32 armor_per_attack; // offset 0x5AC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecSpirits; // offset 0x5B0, size 0x18, align 8
};
