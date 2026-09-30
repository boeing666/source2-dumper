#pragma once

class CGradientFog : public CBaseEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // offset 0x4B0, size 0x8, align 8
    float32 m_flFogStartDistance; // offset 0x4B8, size 0x4, align 4
    float32 m_flFogEndDistance; // offset 0x4BC, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x4C0, size 0x1, align 1
    char _pad_04C1[0x3]; // offset 0x4C1
    float32 m_flFogStartHeight; // offset 0x4C4, size 0x4, align 4
    float32 m_flFogEndHeight; // offset 0x4C8, size 0x4, align 4
    float32 m_flFarZ; // offset 0x4CC, size 0x4, align 4
    float32 m_flFogMaxOpacity; // offset 0x4D0, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x4D4, size 0x4, align 4
    float32 m_flFogVerticalExponent; // offset 0x4D8, size 0x4, align 4
    Color m_fogColor; // offset 0x4DC, size 0x4, align 4
    float32 m_flFogStrength; // offset 0x4E0, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x4E4, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x4E8, size 0x1, align 1
    bool m_bIsEnabled; // offset 0x4E9, size 0x1, align 1
    bool m_bGradientFogNeedsTextures; // offset 0x4EA, size 0x1, align 1
    char _pad_04EB[0x5]; // offset 0x4EB
};
