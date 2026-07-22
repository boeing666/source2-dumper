#pragma once

class CDOTA_Modifier_EarthSpirit_StoneThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CNewParticleEffect* m_pVisionRangeFX; // offset 0x1A58, size 0x8, align 8
    int32 vision_radius; // offset 0x1A60, size 0x4, align 4
    bool m_bHasBeenMagnetized; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    ParticleIndex_t m_nFXIndex; // offset 0x1A68, size 0x4, align 255
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
