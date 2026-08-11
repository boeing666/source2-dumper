#pragma once

class CDOTA_Modifier_Pudge_Dismember_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vDestination; // offset 0x1A78, size 0xC, align 4
    int32 pull_units_per_second; // offset 0x1A84, size 0x4, align 4
    float32 pull_distance_limit; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x14]; // offset 0x1A8C
    float32 animation_rate; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
