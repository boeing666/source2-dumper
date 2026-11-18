#pragma once

class CDOTA_Modifier_Broodmother_SpinWeb : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 health_regen; // offset 0x1AF8, size 0x4, align 4
    int32 break_move_cap; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_movespeed; // offset 0x1B00, size 0x4, align 4
    float32 bonus_turn_rate; // offset 0x1B04, size 0x4, align 4
    float32 flLastDamageTime; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
