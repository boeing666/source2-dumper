#pragma once

class CCitadel_Modifier_HalloweenMask : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ParticleIndex_t m_nMaskFX; // offset 0x140, size 0x4, align 255
    char _pad_0144[0x4]; // offset 0x144
    CWeakHandle< InfoForResourceTypeCModel > m_hMaskModel; // offset 0x148, size 0x8, align 8
    float32 m_flSugarRushControl; // offset 0x150, size 0x4, align 4
    int32 m_nMaskToUse; // offset 0x154, size 0x4, align 4
};
