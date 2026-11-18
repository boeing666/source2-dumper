#pragma once

class CDOTA_Modifier_Axe_BattleHunger : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage_per_second; // offset 0x1AF8, size 0x4, align 4
    int32 slow; // offset 0x1AFC, size 0x4, align 4
    bool should_stack; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x7]; // offset 0x1B01
};
