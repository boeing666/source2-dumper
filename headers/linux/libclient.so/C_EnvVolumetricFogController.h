#pragma once

class C_EnvVolumetricFogController : public C_BaseEntity /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    float32 m_flScattering; // offset 0x76C, size 0x4, align 4
    Color m_TintColor; // offset 0x770, size 0x4, align 1
    float32 m_flAnisotropy; // offset 0x774, size 0x4, align 4
    float32 m_flFadeSpeed; // offset 0x778, size 0x4, align 4
    float32 m_flDrawDistance; // offset 0x77C, size 0x4, align 4
    float32 m_flFadeInStart; // offset 0x780, size 0x4, align 4
    float32 m_flFadeInEnd; // offset 0x784, size 0x4, align 4
    float32 m_flIndirectStrength; // offset 0x788, size 0x4, align 4
    int32 m_nVolumeDepth; // offset 0x78C, size 0x4, align 4
    float32 m_fFirstVolumeSliceThickness; // offset 0x790, size 0x4, align 4
    int32 m_nIndirectTextureDimX; // offset 0x794, size 0x4, align 4
    int32 m_nIndirectTextureDimY; // offset 0x798, size 0x4, align 4
    int32 m_nIndirectTextureDimZ; // offset 0x79C, size 0x4, align 4
    Vector m_vBoxMins; // offset 0x7A0, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x7AC, size 0xC, align 4
    bool m_bActive; // offset 0x7B8, size 0x1, align 1
    char _pad_07B9[0x3]; // offset 0x7B9
    GameTime_t m_flStartAnisoTime; // offset 0x7BC, size 0x4, align 255
    GameTime_t m_flStartScatterTime; // offset 0x7C0, size 0x4, align 255
    GameTime_t m_flStartDrawDistanceTime; // offset 0x7C4, size 0x4, align 255
    float32 m_flStartAnisotropy; // offset 0x7C8, size 0x4, align 4
    float32 m_flStartScattering; // offset 0x7CC, size 0x4, align 4
    float32 m_flStartDrawDistance; // offset 0x7D0, size 0x4, align 4
    float32 m_flDefaultAnisotropy; // offset 0x7D4, size 0x4, align 4
    float32 m_flDefaultScattering; // offset 0x7D8, size 0x4, align 4
    float32 m_flDefaultDrawDistance; // offset 0x7DC, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x7E0, size 0x1, align 1
    bool m_bEnableIndirect; // offset 0x7E1, size 0x1, align 1
    bool m_bIsMaster; // offset 0x7E2, size 0x1, align 1
    char _pad_07E3[0x5]; // offset 0x7E3
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // offset 0x7E8, size 0x8, align 8
    int32 m_nForceRefreshCount; // offset 0x7F0, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0x7F4, size 0x4, align 4
    float32 m_fNoiseStrength; // offset 0x7F8, size 0x4, align 4
    Vector m_vNoiseScale; // offset 0x7FC, size 0xC, align 4
    float32 m_fWindSpeed; // offset 0x808, size 0x4, align 4
    Vector m_vWindDirection; // offset 0x80C, size 0xC, align 4
    bool m_bFirstTime; // offset 0x818, size 0x1, align 1
    char _pad_0819[0x7]; // offset 0x819
};
