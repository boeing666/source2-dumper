#pragma once

class CDOTA_Modifier_Venomancer_VenomousGale : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 explosion_stun_duration; // offset 0x1A58, size 0x4, align 4
    int32 explosion_damage; // offset 0x1A5C, size 0x4, align 4
    int32 movement_slow; // offset 0x1A60, size 0x4, align 4
    int32 tick_damage; // offset 0x1A64, size 0x4, align 4
    float32 tick_interval; // offset 0x1A68, size 0x4, align 4
    float32 duration; // offset 0x1A6C, size 0x4, align 4
};
