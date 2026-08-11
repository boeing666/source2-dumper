#pragma once

class CDOTA_Modifier_AbyssalUnderlord_DarkRift : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nfxTargetTp; // offset 0x1A78, size 0x4, align 255
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    int32 duration; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nfxAmbientFx; // offset 0x1A84, size 0x4, align 255
    bool bPointTarget; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    VectorWS vDestination; // offset 0x1A8C, size 0xC, align 4
    char _pad_1A98[0x18]; // offset 0x1A98
};
