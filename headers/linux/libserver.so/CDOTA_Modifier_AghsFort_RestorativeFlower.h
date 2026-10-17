#pragma once

class CDOTA_Modifier_AghsFort_RestorativeFlower : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 radius; // offset 0x1AA8, size 0x4, align 4
    int32 heal; // offset 0x1AAC, size 0x4, align 4
    int32 vision_radius; // offset 0x1AB0, size 0x4, align 4
    float32 vision_duration; // offset 0x1AB4, size 0x4, align 4
    int32 model_scale; // offset 0x1AB8, size 0x4, align 4
    bool bExploding; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 stun_duration; // offset 0x1AC0, size 0x4, align 4
    ParticleIndex_t m_nFXAmbient; // offset 0x1AC4, size 0x4, align 255
};
