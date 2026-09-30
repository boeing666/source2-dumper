#pragma once

class CEnvCubemapFog : public CBaseEntity /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    float32 m_flEndDistance; // offset 0x4B0, size 0x4, align 4
    float32 m_flStartDistance; // offset 0x4B4, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x4B8, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x4BC, size 0x1, align 1
    char _pad_04BD[0x3]; // offset 0x4BD
    float32 m_flFogHeightWidth; // offset 0x4C0, size 0x4, align 4
    float32 m_flFogHeightEnd; // offset 0x4C4, size 0x4, align 4
    float32 m_flFogHeightStart; // offset 0x4C8, size 0x4, align 4
    float32 m_flFogHeightExponent; // offset 0x4CC, size 0x4, align 4
    float32 m_flLODBias; // offset 0x4D0, size 0x4, align 4
    bool m_bActive; // offset 0x4D4, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x4D5, size 0x1, align 1
    char _pad_04D6[0x2]; // offset 0x4D6
    float32 m_flFogMaxOpacity; // offset 0x4D8, size 0x4, align 4
    int32 m_nCubemapSourceType; // offset 0x4DC, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x4E0, size 0x8, align 8
    CUtlSymbolLarge m_iszSkyEntity; // offset 0x4E8, size 0x8, align 8
    int32 m_nHeightFogType; // offset 0x4F0, size 0x4, align 4
    int32 m_nFogHeightBlendMode; // offset 0x4F4, size 0x4, align 4
    int32 m_nFogHeightCoordinateSpace; // offset 0x4F8, size 0x4, align 4
    int32 m_nDistanceFogType; // offset 0x4FC, size 0x4, align 4
    CUtlSymbolLarge m_DistanceFogCurveString; // offset 0x500, size 0x8, align 8
    CUtlSymbolLarge m_HeightFogCurveString; // offset 0x508, size 0x8, align 8
    char _pad_0510[0x90]; // offset 0x510
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // offset 0x5A0, size 0x8, align 8
    bool m_bHasHeightFogEnd; // offset 0x5A8, size 0x1, align 1
    bool m_bFirstTime; // offset 0x5A9, size 0x1, align 1
    char _pad_05AA[0x6]; // offset 0x5AA
};
