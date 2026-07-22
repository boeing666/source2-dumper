#pragma once

class C_GradientFog : public C_BaseEntity /*0x0*/  // sizeof 0x698, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // offset 0x600, size 0x8, align 8
    float32 m_flFogStartDistance; // offset 0x608, size 0x4, align 4
    float32 m_flFogEndDistance; // offset 0x60C, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x610, size 0x1, align 1
    char _pad_0611[0x3]; // offset 0x611
    float32 m_flFogStartHeight; // offset 0x614, size 0x4, align 4
    float32 m_flFogEndHeight; // offset 0x618, size 0x4, align 4
    float32 m_flFarZ; // offset 0x61C, size 0x4, align 4
    float32 m_flFogMaxOpacity; // offset 0x620, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x624, size 0x4, align 4
    float32 m_flFogVerticalExponent; // offset 0x628, size 0x4, align 4
    Color m_fogColor; // offset 0x62C, size 0x4, align 1
    float32 m_flFogStrength; // offset 0x630, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x634, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x638, size 0x1, align 1
    bool m_bIsEnabled; // offset 0x639, size 0x1, align 1
    bool m_bGradientFogNeedsTextures; // offset 0x63A, size 0x1, align 1
    char _pad_063B[0x5D]; // offset 0x63B
};
