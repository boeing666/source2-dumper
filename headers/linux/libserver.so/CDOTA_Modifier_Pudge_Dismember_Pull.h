#pragma once

class CDOTA_Modifier_Pudge_Dismember_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vDestination; // offset 0x1AF8, size 0xC, align 4
    int32 pull_units_per_second; // offset 0x1B04, size 0x4, align 4
    float32 pull_distance_limit; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x14]; // offset 0x1B0C
    float32 animation_rate; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
