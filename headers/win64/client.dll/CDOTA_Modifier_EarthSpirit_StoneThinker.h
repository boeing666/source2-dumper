#pragma once

class CDOTA_Modifier_EarthSpirit_StoneThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CNewParticleEffect* m_pVisionRangeFX; // offset 0x1A78, size 0x8, align 8
    int32 vision_radius; // offset 0x1A80, size 0x4, align 4
    bool m_bHasBeenMagnetized; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    ParticleIndex_t m_nFXIndex; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
