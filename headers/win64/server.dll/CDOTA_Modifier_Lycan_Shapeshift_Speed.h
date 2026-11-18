#pragma once

class CDOTA_Modifier_Lycan_Shapeshift_Speed : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 speed; // offset 0x1AF8, size 0x4, align 4
    int32 crit_chance; // offset 0x1AFC, size 0x4, align 4
    int32 crit_multiplier; // offset 0x1B00, size 0x4, align 4
    int32 health_bonus; // offset 0x1B04, size 0x4, align 4
};
