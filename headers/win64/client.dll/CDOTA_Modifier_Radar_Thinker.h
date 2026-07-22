#pragma once

class CDOTA_Modifier_Radar_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 radius; // offset 0x1A58, size 0x4, align 4
    bool m_bEverFound; // offset 0x1A5C, size 0x1, align 1
    bool m_bBonus; // offset 0x1A5D, size 0x1, align 1
    char _pad_1A5E[0x2]; // offset 0x1A5E
    ParticleIndex_t m_nScanParticleIndex; // offset 0x1A60, size 0x4, align 255
    char _pad_1A64[0x4]; // offset 0x1A64
};
