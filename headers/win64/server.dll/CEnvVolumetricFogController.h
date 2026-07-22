#pragma once

class CEnvVolumetricFogController : public CBaseEntity /*0x0*/  // sizeof 0x558, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_flScattering; // offset 0x4A8, size 0x4, align 4
    Color m_TintColor; // offset 0x4AC, size 0x4, align 1
    float32 m_flAnisotropy; // offset 0x4B0, size 0x4, align 4
    float32 m_flFadeSpeed; // offset 0x4B4, size 0x4, align 4
    float32 m_flDrawDistance; // offset 0x4B8, size 0x4, align 4
    float32 m_flFadeInStart; // offset 0x4BC, size 0x4, align 4
    float32 m_flFadeInEnd; // offset 0x4C0, size 0x4, align 4
    float32 m_flIndirectStrength; // offset 0x4C4, size 0x4, align 4
    int32 m_nVolumeDepth; // offset 0x4C8, size 0x4, align 4
    float32 m_fFirstVolumeSliceThickness; // offset 0x4CC, size 0x4, align 4
    int32 m_nIndirectTextureDimX; // offset 0x4D0, size 0x4, align 4
    int32 m_nIndirectTextureDimY; // offset 0x4D4, size 0x4, align 4
    int32 m_nIndirectTextureDimZ; // offset 0x4D8, size 0x4, align 4
    Vector m_vBoxMins; // offset 0x4DC, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x4E8, size 0xC, align 4
    bool m_bActive; // offset 0x4F4, size 0x1, align 1
    char _pad_04F5[0x3]; // offset 0x4F5
    GameTime_t m_flStartAnisoTime; // offset 0x4F8, size 0x4, align 255
    GameTime_t m_flStartScatterTime; // offset 0x4FC, size 0x4, align 255
    GameTime_t m_flStartDrawDistanceTime; // offset 0x500, size 0x4, align 255
    float32 m_flStartAnisotropy; // offset 0x504, size 0x4, align 4
    float32 m_flStartScattering; // offset 0x508, size 0x4, align 4
    float32 m_flStartDrawDistance; // offset 0x50C, size 0x4, align 4
    float32 m_flDefaultAnisotropy; // offset 0x510, size 0x4, align 4
    float32 m_flDefaultScattering; // offset 0x514, size 0x4, align 4
    float32 m_flDefaultDrawDistance; // offset 0x518, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x51C, size 0x1, align 1
    bool m_bEnableIndirect; // offset 0x51D, size 0x1, align 1
    bool m_bIsMaster; // offset 0x51E, size 0x1, align 1
    char _pad_051F[0x1]; // offset 0x51F
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // offset 0x520, size 0x8, align 8
    int32 m_nForceRefreshCount; // offset 0x528, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0x52C, size 0x4, align 4
    float32 m_fNoiseStrength; // offset 0x530, size 0x4, align 4
    Vector m_vNoiseScale; // offset 0x534, size 0xC, align 4
    float32 m_fWindSpeed; // offset 0x540, size 0x4, align 4
    Vector m_vWindDirection; // offset 0x544, size 0xC, align 4
    bool m_bFirstTime; // offset 0x550, size 0x1, align 1
    char _pad_0551[0x7]; // offset 0x551
};
