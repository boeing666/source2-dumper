#pragma once

class CDOTA_Modifier_EarthSpirit_StoneThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 vision_radius; // offset 0x1AF8, size 0x4, align 4
    bool m_bHasBeenMagnetized; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    ParticleIndex_t m_nFXIndex; // offset 0x1B00, size 0x4, align 255
    char _pad_1B04[0x4]; // offset 0x1B04
};
