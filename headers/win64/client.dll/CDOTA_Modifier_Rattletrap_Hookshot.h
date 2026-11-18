#pragma once

class CDOTA_Modifier_Rattletrap_Hookshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B0C]; // offset 0x0
    int32 speed; // offset 0x1B0C, size 0x4, align 4
    float32 stun_radius; // offset 0x1B10, size 0x4, align 4
    float32 radius_ally; // offset 0x1B14, size 0x4, align 4
    float32 cooldown_refund_ally; // offset 0x1B18, size 0x4, align 4
    float32 damage; // offset 0x1B1C, size 0x4, align 4
    float32 duration; // offset 0x1B20, size 0x4, align 4
    float32 ally_shield_duration; // offset 0x1B24, size 0x4, align 4
};
