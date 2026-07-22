#pragma once

class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 think_interval; // offset 0x1A58, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x1A5C, size 0x4, align 4
    float32 k_flCloseThreshold; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
