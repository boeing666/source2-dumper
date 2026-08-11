#pragma once

class CDOTA_Modifier_EarthSpirit_Petrify : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    bool m_bHasBeenMagnetized; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
};
