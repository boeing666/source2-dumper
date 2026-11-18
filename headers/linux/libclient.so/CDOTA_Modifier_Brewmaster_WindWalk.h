#pragma once

class CDOTA_Modifier_Brewmaster_WindWalk : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 bonus_movement_speeed; // offset 0x1B08, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B0C, size 0x4, align 4
};
