#pragma once

class C_DOTA_Ability_Tinker_Rearm : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x828, size 0xC, align 4
    bool affects_items; // offset 0x834, size 0x1, align 1
    char _pad_0835[0x3]; // offset 0x835
};
