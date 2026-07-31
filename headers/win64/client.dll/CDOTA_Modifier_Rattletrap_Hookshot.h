#pragma once

class CDOTA_Modifier_Rattletrap_Hookshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A8C]; // offset 0x0
    int32 speed; // offset 0x1A8C, size 0x4, align 4
    float32 stun_radius; // offset 0x1A90, size 0x4, align 4
    float32 radius_ally; // offset 0x1A94, size 0x4, align 4
    float32 cooldown_refund_ally; // offset 0x1A98, size 0x4, align 4
    float32 damage; // offset 0x1A9C, size 0x4, align 4
    float32 duration; // offset 0x1AA0, size 0x4, align 4
    float32 ally_shield_duration; // offset 0x1AA4, size 0x4, align 4
};
