#pragma once

class CDOTA_Modifier_Silver_Edge_WindWalk : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    int32 windwalk_bonus_damage; // offset 0x1AB8, size 0x4, align 4
    int32 windwalk_movement_speed; // offset 0x1ABC, size 0x4, align 4
};
