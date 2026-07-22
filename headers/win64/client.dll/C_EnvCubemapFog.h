#pragma once

class C_EnvCubemapFog : public C_BaseEntity /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    float32 m_flEndDistance; // offset 0x600, size 0x4, align 4
    float32 m_flStartDistance; // offset 0x604, size 0x4, align 4
    float32 m_flFogFalloffExponent; // offset 0x608, size 0x4, align 4
    bool m_bHeightFogEnabled; // offset 0x60C, size 0x1, align 1
    char _pad_060D[0x3]; // offset 0x60D
    float32 m_flFogHeightWidth; // offset 0x610, size 0x4, align 4
    float32 m_flFogHeightEnd; // offset 0x614, size 0x4, align 4
    float32 m_flFogHeightStart; // offset 0x618, size 0x4, align 4
    float32 m_flFogHeightExponent; // offset 0x61C, size 0x4, align 4
    float32 m_flLODBias; // offset 0x620, size 0x4, align 4
    bool m_bActive; // offset 0x624, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x625, size 0x1, align 1
    char _pad_0626[0x2]; // offset 0x626
    float32 m_flFogMaxOpacity; // offset 0x628, size 0x4, align 4
    int32 m_nCubemapSourceType; // offset 0x62C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x630, size 0x8, align 8
    CUtlSymbolLarge m_iszSkyEntity; // offset 0x638, size 0x8, align 8
    int32 m_nHeightFogType; // offset 0x640, size 0x4, align 4
    int32 m_nFogHeightBlendMode; // offset 0x644, size 0x4, align 4
    int32 m_nFogHeightCoordinateSpace; // offset 0x648, size 0x4, align 4
    int32 m_nDistanceFogType; // offset 0x64C, size 0x4, align 4
    CUtlSymbolLarge m_DistanceFogCurveString; // offset 0x650, size 0x8, align 8
    CUtlSymbolLarge m_HeightFogCurveString; // offset 0x658, size 0x8, align 8
    char _pad_0660[0x90]; // offset 0x660
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // offset 0x6F0, size 0x8, align 8
    bool m_bHasHeightFogEnd; // offset 0x6F8, size 0x1, align 1
    bool m_bFirstTime; // offset 0x6F9, size 0x1, align 1
    char _pad_06FA[0x6]; // offset 0x6FA
};
