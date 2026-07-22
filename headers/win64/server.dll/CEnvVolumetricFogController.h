#pragma once

class CEnvVolumetricFogController : public CBaseEntity /*0x0*/  // sizeof 0x548, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flScattering; // offset 0x498, size 0x4, align 4
    Color m_TintColor; // offset 0x49C, size 0x4, align 1
    float32 m_flAnisotropy; // offset 0x4A0, size 0x4, align 4
    float32 m_flFadeSpeed; // offset 0x4A4, size 0x4, align 4
    float32 m_flDrawDistance; // offset 0x4A8, size 0x4, align 4
    float32 m_flFadeInStart; // offset 0x4AC, size 0x4, align 4
    float32 m_flFadeInEnd; // offset 0x4B0, size 0x4, align 4
    float32 m_flIndirectStrength; // offset 0x4B4, size 0x4, align 4
    int32 m_nVolumeDepth; // offset 0x4B8, size 0x4, align 4
    float32 m_fFirstVolumeSliceThickness; // offset 0x4BC, size 0x4, align 4
    int32 m_nIndirectTextureDimX; // offset 0x4C0, size 0x4, align 4
    int32 m_nIndirectTextureDimY; // offset 0x4C4, size 0x4, align 4
    int32 m_nIndirectTextureDimZ; // offset 0x4C8, size 0x4, align 4
    Vector m_vBoxMins; // offset 0x4CC, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x4D8, size 0xC, align 4
    bool m_bActive; // offset 0x4E4, size 0x1, align 1
    char _pad_04E5[0x3]; // offset 0x4E5
    GameTime_t m_flStartAnisoTime; // offset 0x4E8, size 0x4, align 255
    GameTime_t m_flStartScatterTime; // offset 0x4EC, size 0x4, align 255
    GameTime_t m_flStartDrawDistanceTime; // offset 0x4F0, size 0x4, align 255
    float32 m_flStartAnisotropy; // offset 0x4F4, size 0x4, align 4
    float32 m_flStartScattering; // offset 0x4F8, size 0x4, align 4
    float32 m_flStartDrawDistance; // offset 0x4FC, size 0x4, align 4
    float32 m_flDefaultAnisotropy; // offset 0x500, size 0x4, align 4
    float32 m_flDefaultScattering; // offset 0x504, size 0x4, align 4
    float32 m_flDefaultDrawDistance; // offset 0x508, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x50C, size 0x1, align 1
    bool m_bEnableIndirect; // offset 0x50D, size 0x1, align 1
    bool m_bIsMaster; // offset 0x50E, size 0x1, align 1
    char _pad_050F[0x1]; // offset 0x50F
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // offset 0x510, size 0x8, align 8
    int32 m_nForceRefreshCount; // offset 0x518, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0x51C, size 0x4, align 4
    float32 m_fNoiseStrength; // offset 0x520, size 0x4, align 4
    Vector m_vNoiseScale; // offset 0x524, size 0xC, align 4
    float32 m_fWindSpeed; // offset 0x530, size 0x4, align 4
    Vector m_vWindDirection; // offset 0x534, size 0xC, align 4
    bool m_bFirstTime; // offset 0x540, size 0x1, align 1
    char _pad_0541[0x7]; // offset 0x541
};
