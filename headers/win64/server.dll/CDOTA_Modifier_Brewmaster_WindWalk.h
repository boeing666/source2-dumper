#pragma once

class CDOTA_Modifier_Brewmaster_WindWalk : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A88]; // offset 0x0
    int32 bonus_movement_speeed; // offset 0x1A88, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A8C, size 0x4, align 4
};
