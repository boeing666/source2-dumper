#pragma once

class C_GradientFog : public C_BaseEntity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // offset 0x780, size 0x8, align 8
    float32 m_flFogStartDistance; // offset 0x788, size 0x4, align 4
    float32 m_flFogEndDistance; // offset 0x78C, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    float32 m_flFogStartHeight; // offset 0x794, size 0x4, align 4
    float32 m_flFogEndHeight; // offset 0x798, size 0x4, align 4
    float32 m_flFarZ; // offset 0x79C, size 0x4, align 4
    float32 m_flFogMaxOpacity; // offset 0x7A0, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x7A4, size 0x4, align 4
    float32 m_flFogVerticalExponent; // offset 0x7A8, size 0x4, align 4
    Color m_fogColor; // offset 0x7AC, size 0x4, align 1
    float32 m_flFogStrength; // offset 0x7B0, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x7B4, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x7B8, size 0x1, align 1
    bool m_bIsEnabled; // offset 0x7B9, size 0x1, align 1
    bool m_bGradientFogNeedsTextures; // offset 0x7BA, size 0x1, align 1
    char _pad_07BB[0x5D]; // offset 0x7BB
};
