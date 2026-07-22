#pragma once

class CDOTA_Modifier_Rattletrap_RocketFlare : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A6C]; // offset 0x0
    int32 projectile_vision_radius; // offset 0x1A6C, size 0x4, align 4
    float32 projectile_vision_duration; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
