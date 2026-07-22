#pragma once

class CDOTA_Ability_Huskar_Berserkers_Blood : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    bool activatable; // offset 0x580, size 0x1, align 1
    char _pad_0581[0x3]; // offset 0x581
    int32 m_nHealthCost; // offset 0x584, size 0x4, align 4
    int32 m_nDebuffCount; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x4]; // offset 0x58C
};
