#pragma once

class CDOTA_Modifier_Lycan_Shapeshift_Speed : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 speed; // offset 0x1A78, size 0x4, align 4
    int32 crit_chance; // offset 0x1A7C, size 0x4, align 4
    int32 crit_multiplier; // offset 0x1A80, size 0x4, align 4
    int32 health_bonus; // offset 0x1A84, size 0x4, align 4
};
