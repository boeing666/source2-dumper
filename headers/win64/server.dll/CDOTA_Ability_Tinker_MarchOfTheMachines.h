#pragma once

class CDOTA_Ability_Tinker_MarchOfTheMachines : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 splash_radius; // offset 0x580, size 0x4, align 4
    int32 damage; // offset 0x584, size 0x4, align 4
    int32 heal_duration; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x4]; // offset 0x58C
};
