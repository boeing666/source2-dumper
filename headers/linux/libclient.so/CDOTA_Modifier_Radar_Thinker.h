#pragma once

class CDOTA_Modifier_Radar_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 radius; // offset 0x1A78, size 0x4, align 4
    bool m_bEverFound; // offset 0x1A7C, size 0x1, align 1
    bool m_bBonus; // offset 0x1A7D, size 0x1, align 1
    char _pad_1A7E[0x2]; // offset 0x1A7E
    ParticleIndex_t m_nScanParticleIndex; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
};
