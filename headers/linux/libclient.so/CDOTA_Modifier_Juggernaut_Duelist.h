#pragma once

class CDOTA_Modifier_Juggernaut_Duelist : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 front_angle; // offset 0x1A78, size 0x4, align 4
    int32 front_damage_increase; // offset 0x1A7C, size 0x4, align 4
};
