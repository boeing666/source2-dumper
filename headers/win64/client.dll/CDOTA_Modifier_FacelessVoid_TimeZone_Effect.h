#pragma once

class CDOTA_Modifier_FacelessVoid_TimeZone_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_move_speed; // offset 0x1A58, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_cast_speed; // offset 0x1A60, size 0x4, align 4
    int32 bonus_turn_speed; // offset 0x1A64, size 0x4, align 4
    int32 cooldown_acceleration; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
