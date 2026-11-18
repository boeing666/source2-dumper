#pragma once

class CDOTA_Modifier_AghsFort_ExplosiveBarrel : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x1AF8, size 0x4, align 255
    int32 radius; // offset 0x1AFC, size 0x4, align 4
    int32 damage; // offset 0x1B00, size 0x4, align 4
    int32 vision_radius; // offset 0x1B04, size 0x4, align 4
    float32 vision_duration; // offset 0x1B08, size 0x4, align 4
    int32 model_scale; // offset 0x1B0C, size 0x4, align 4
    bool bExploding; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x3]; // offset 0x1B11
    float32 stun_duration; // offset 0x1B14, size 0x4, align 4
};
