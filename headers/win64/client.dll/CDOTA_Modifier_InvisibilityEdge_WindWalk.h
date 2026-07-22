#pragma once

class CDOTA_Modifier_InvisibilityEdge_WindWalk : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    int32 windwalk_bonus_damage; // offset 0x1A68, size 0x4, align 4
    int32 windwalk_movement_speed; // offset 0x1A6C, size 0x4, align 4
};
