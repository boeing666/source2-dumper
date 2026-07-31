#pragma once

class CDOTA_Modifier_Silver_Edge_WindWalk : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A84]; // offset 0x0
    int32 windwalk_bonus_damage; // offset 0x1A84, size 0x4, align 4
    int32 windwalk_movement_speed; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
