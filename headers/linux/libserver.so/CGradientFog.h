#pragma once

class CGradientFog : public CBaseEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // offset 0x788, size 0x8, align 8
    float32 m_flFogStartDistance; // offset 0x790, size 0x4, align 4
    float32 m_flFogEndDistance; // offset 0x794, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x798, size 0x1, align 1
    char _pad_0799[0x3]; // offset 0x799
    float32 m_flFogStartHeight; // offset 0x79C, size 0x4, align 4
    float32 m_flFogEndHeight; // offset 0x7A0, size 0x4, align 4
    float32 m_flFarZ; // offset 0x7A4, size 0x4, align 4
    float32 m_flFogMaxOpacity; // offset 0x7A8, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x7AC, size 0x4, align 4
    float32 m_flFogVerticalExponent; // offset 0x7B0, size 0x4, align 4
    Color m_fogColor; // offset 0x7B4, size 0x4, align 1
    float32 m_flFogStrength; // offset 0x7B8, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x7BC, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x7C0, size 0x1, align 1
    bool m_bIsEnabled; // offset 0x7C1, size 0x1, align 1
    bool m_bGradientFogNeedsTextures; // offset 0x7C2, size 0x1, align 1
    char _pad_07C3[0x5]; // offset 0x7C3
};
