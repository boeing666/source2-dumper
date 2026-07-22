#pragma once

class C_EnvCubemapFog : public C_BaseEntity /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    float32 m_flEndDistance; // offset 0x76C, size 0x4, align 4
    float32 m_flStartDistance; // offset 0x770, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x774, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    float32 m_flFogHeightWidth; // offset 0x77C, size 0x4, align 4
    float32 m_flFogHeightEnd; // offset 0x780, size 0x4, align 4
    float32 m_flFogHeightStart; // offset 0x784, size 0x4, align 4
    float32 m_flFogHeightExponent; // offset 0x788, size 0x4, align 4
    float32 m_flLODBias; // offset 0x78C, size 0x4, align 4
    bool m_bActive; // offset 0x790, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x791, size 0x1, align 1
    char _pad_0792[0x2]; // offset 0x792
    float32 m_flFogMaxOpacity; // offset 0x794, size 0x4, align 4
    int32 m_nCubemapSourceType; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x7A0, size 0x8, align 8
    CUtlSymbolLarge m_iszSkyEntity; // offset 0x7A8, size 0x8, align 8
    int32 m_nHeightFogType; // offset 0x7B0, size 0x4, align 4
    int32 m_nFogHeightBlendMode; // offset 0x7B4, size 0x4, align 4
    int32 m_nFogHeightCoordinateSpace; // offset 0x7B8, size 0x4, align 4
    int32 m_nDistanceFogType; // offset 0x7BC, size 0x4, align 4
    CUtlSymbolLarge m_DistanceFogCurveString; // offset 0x7C0, size 0x8, align 8
    CUtlSymbolLarge m_HeightFogCurveString; // offset 0x7C8, size 0x8, align 8
    char _pad_07D0[0x90]; // offset 0x7D0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // offset 0x860, size 0x8, align 8
    bool m_bHasHeightFogEnd; // offset 0x868, size 0x1, align 1
    bool m_bFirstTime; // offset 0x869, size 0x1, align 1
    char _pad_086A[0x6]; // offset 0x86A
};
