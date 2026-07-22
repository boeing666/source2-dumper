#pragma once

class CDOTA_Ability_Tinker_Rearm : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x580, size 0xC, align 4
    bool affects_items; // offset 0x58C, size 0x1, align 1
    char _pad_058D[0x3]; // offset 0x58D
};
