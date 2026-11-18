#pragma once

class CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 collision_radius; // offset 0x1AF8, size 0x4, align 4
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    float32 distance; // offset 0x1B00, size 0x4, align 4
    float32 speed; // offset 0x1B04, size 0x4, align 4
    int32 machines_per_sec; // offset 0x1B08, size 0x4, align 4
    int32 heal_per_second; // offset 0x1B0C, size 0x4, align 4
    Vector m_vDir; // offset 0x1B10, size 0xC, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
