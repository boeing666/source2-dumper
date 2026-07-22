#pragma once

class CEnvCubemapFog : public CBaseEntity /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flEndDistance; // offset 0x498, size 0x4, align 4
    float32 m_flStartDistance; // offset 0x49C, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x4A0, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x4A4, size 0x1, align 1
    char _pad_04A5[0x3]; // offset 0x4A5
    float32 m_flFogHeightWidth; // offset 0x4A8, size 0x4, align 4
    float32 m_flFogHeightEnd; // offset 0x4AC, size 0x4, align 4
    float32 m_flFogHeightStart; // offset 0x4B0, size 0x4, align 4
    float32 m_flFogHeightExponent; // offset 0x4B4, size 0x4, align 4
    float32 m_flLODBias; // offset 0x4B8, size 0x4, align 4
    bool m_bActive; // offset 0x4BC, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x4BD, size 0x1, align 1
    char _pad_04BE[0x2]; // offset 0x4BE
    float32 m_flFogMaxOpacity; // offset 0x4C0, size 0x4, align 4
    int32 m_nCubemapSourceType; // offset 0x4C4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x4C8, size 0x8, align 8
    CUtlSymbolLarge m_iszSkyEntity; // offset 0x4D0, size 0x8, align 8
    int32 m_nHeightFogType; // offset 0x4D8, size 0x4, align 4
    int32 m_nFogHeightBlendMode; // offset 0x4DC, size 0x4, align 4
    int32 m_nFogHeightCoordinateSpace; // offset 0x4E0, size 0x4, align 4
    int32 m_nDistanceFogType; // offset 0x4E4, size 0x4, align 4
    CUtlSymbolLarge m_DistanceFogCurveString; // offset 0x4E8, size 0x8, align 8
    CUtlSymbolLarge m_HeightFogCurveString; // offset 0x4F0, size 0x8, align 8
    char _pad_04F8[0x90]; // offset 0x4F8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // offset 0x588, size 0x8, align 8
    bool m_bHasHeightFogEnd; // offset 0x590, size 0x1, align 1
    bool m_bFirstTime; // offset 0x591, size 0x1, align 1
    char _pad_0592[0x6]; // offset 0x592
};
