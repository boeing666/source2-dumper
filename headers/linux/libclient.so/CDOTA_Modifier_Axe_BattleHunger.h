#pragma once

class CDOTA_Modifier_Axe_BattleHunger : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage_per_second; // offset 0x1A58, size 0x4, align 4
    int32 slow; // offset 0x1A5C, size 0x4, align 4
    bool should_stack; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
};
