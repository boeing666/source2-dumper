#pragma once

class CDOTA_Modifier_EarthSpirit_StoneThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CNewParticleEffect* m_pVisionRangeFX; // offset 0x1AF8, size 0x8, align 8
    int32 vision_radius; // offset 0x1B00, size 0x4, align 4
    bool m_bHasBeenMagnetized; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    ParticleIndex_t m_nFXIndex; // offset 0x1B08, size 0x4, align 255
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
