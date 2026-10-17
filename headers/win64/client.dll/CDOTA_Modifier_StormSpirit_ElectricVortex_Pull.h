#pragma once

class CDOTA_Modifier_StormSpirit_ElectricVortex_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vDestination; // offset 0x1AA8, size 0xC, align 4
    int32 electric_vortex_pull_distance; // offset 0x1AB4, size 0x4, align 4
    float32 electric_vortex_pull_tether_range; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x14]; // offset 0x1ABC
};
