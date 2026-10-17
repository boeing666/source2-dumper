#pragma once

class CDOTA_Modifier_Radar_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 radius; // offset 0x1AA8, size 0x4, align 4
    bool m_bEverFound; // offset 0x1AAC, size 0x1, align 1
    bool m_bBonus; // offset 0x1AAD, size 0x1, align 1
    char _pad_1AAE[0x2]; // offset 0x1AAE
    ParticleIndex_t m_nScanParticleIndex; // offset 0x1AB0, size 0x4, align 255
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
