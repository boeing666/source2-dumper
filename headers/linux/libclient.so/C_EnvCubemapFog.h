#pragma once

class C_EnvCubemapFog : public C_BaseEntity /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    float32 m_flEndDistance; // offset 0x77C, size 0x4, align 4
    float32 m_flStartDistance; // offset 0x780, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x784, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_flFogHeightWidth; // offset 0x78C, size 0x4, align 4
    float32 m_flFogHeightEnd; // offset 0x790, size 0x4, align 4
    float32 m_flFogHeightStart; // offset 0x794, size 0x4, align 4
    float32 m_flFogHeightExponent; // offset 0x798, size 0x4, align 4
    float32 m_flLODBias; // offset 0x79C, size 0x4, align 4
    bool m_bActive; // offset 0x7A0, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x7A1, size 0x1, align 1
    char _pad_07A2[0x2]; // offset 0x7A2
    float32 m_flFogMaxOpacity; // offset 0x7A4, size 0x4, align 4
    int32 m_nCubemapSourceType; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x7B0, size 0x8, align 8
    CUtlSymbolLarge m_iszSkyEntity; // offset 0x7B8, size 0x8, align 8
    int32 m_nHeightFogType; // offset 0x7C0, size 0x4, align 4
    int32 m_nFogHeightBlendMode; // offset 0x7C4, size 0x4, align 4
    int32 m_nFogHeightCoordinateSpace; // offset 0x7C8, size 0x4, align 4
    int32 m_nDistanceFogType; // offset 0x7CC, size 0x4, align 4
    CUtlSymbolLarge m_DistanceFogCurveString; // offset 0x7D0, size 0x8, align 8
    CUtlSymbolLarge m_HeightFogCurveString; // offset 0x7D8, size 0x8, align 8
    char _pad_07E0[0x90]; // offset 0x7E0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // offset 0x870, size 0x8, align 8
    bool m_bHasHeightFogEnd; // offset 0x878, size 0x1, align 1
    bool m_bFirstTime; // offset 0x879, size 0x1, align 1
    char _pad_087A[0x6]; // offset 0x87A
};
