#pragma once

class CDOTA_Ability_DarkCarnival_Pie : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x870]; // offset 0x0
    int32 projectile_speed; // offset 0x870, size 0x4, align 4
    int32 golden_pie; // offset 0x874, size 0x4, align 4
    bool bounce; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
};
