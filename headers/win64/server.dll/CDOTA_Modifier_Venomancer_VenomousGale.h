#pragma once

class CDOTA_Modifier_Venomancer_VenomousGale : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 explosion_stun_duration; // offset 0x1AF8, size 0x4, align 4
    int32 explosion_damage; // offset 0x1AFC, size 0x4, align 4
    int32 movement_slow; // offset 0x1B00, size 0x4, align 4
    int32 tick_damage; // offset 0x1B04, size 0x4, align 4
    float32 tick_interval; // offset 0x1B08, size 0x4, align 4
    float32 duration; // offset 0x1B0C, size 0x4, align 4
};
