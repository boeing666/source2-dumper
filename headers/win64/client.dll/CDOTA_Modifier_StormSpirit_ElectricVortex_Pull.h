#pragma once

class CDOTA_Modifier_StormSpirit_ElectricVortex_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vDestination; // offset 0x1A78, size 0xC, align 4
    int32 electric_vortex_pull_distance; // offset 0x1A84, size 0x4, align 4
    float32 electric_vortex_pull_tether_range; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x14]; // offset 0x1A8C
};
