#pragma once

class CDOTA_Modifier_AbyssalUnderlord_DarkRift : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    ParticleIndex_t m_nfxTargetTp; // offset 0x1AF8, size 0x4, align 255
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    int32 duration; // offset 0x1B00, size 0x4, align 4
    ParticleIndex_t m_nfxAmbientFx; // offset 0x1B04, size 0x4, align 255
    bool bPointTarget; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    VectorWS vDestination; // offset 0x1B0C, size 0xC, align 4
    char _pad_1B18[0x18]; // offset 0x1B18
};
