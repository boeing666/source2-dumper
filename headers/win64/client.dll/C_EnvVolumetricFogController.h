#pragma once

class C_EnvVolumetricFogController : public C_BaseEntity /*0x0*/  // sizeof 0x6A0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    float32 m_flScattering; // offset 0x5F0, size 0x4, align 4 | MNetworkEnable
    Color m_TintColor; // offset 0x5F4, size 0x4, align 1 | MNetworkEnable
    float32 m_flAnisotropy; // offset 0x5F8, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeSpeed; // offset 0x5FC, size 0x4, align 4 | MNetworkEnable
    float32 m_flDrawDistance; // offset 0x600, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeInStart; // offset 0x604, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeInEnd; // offset 0x608, size 0x4, align 4 | MNetworkEnable
    float32 m_flIndirectStrength; // offset 0x60C, size 0x4, align 4 | MNetworkEnable
    int32 m_nVolumeDepth; // offset 0x610, size 0x4, align 4 | MNetworkEnable
    float32 m_fFirstVolumeSliceThickness; // offset 0x614, size 0x4, align 4 | MNetworkEnable
    int32 m_nIndirectTextureDimX; // offset 0x618, size 0x4, align 4 | MNetworkEnable
    int32 m_nIndirectTextureDimY; // offset 0x61C, size 0x4, align 4 | MNetworkEnable
    int32 m_nIndirectTextureDimZ; // offset 0x620, size 0x4, align 4 | MNetworkEnable
    Vector m_vBoxMins; // offset 0x624, size 0xC, align 4 | MNetworkEnable
    Vector m_vBoxMaxs; // offset 0x630, size 0xC, align 4 | MNetworkEnable
    bool m_bActive; // offset 0x63C, size 0x1, align 1 | MNetworkEnable
    char _pad_063D[0x3]; // offset 0x63D
    GameTime_t m_flStartAnisoTime; // offset 0x640, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flStartScatterTime; // offset 0x644, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flStartDrawDistanceTime; // offset 0x648, size 0x4, align 255 | MNetworkEnable
    float32 m_flStartAnisotropy; // offset 0x64C, size 0x4, align 4 | MNetworkEnable
    float32 m_flStartScattering; // offset 0x650, size 0x4, align 4 | MNetworkEnable
    float32 m_flStartDrawDistance; // offset 0x654, size 0x4, align 4 | MNetworkEnable
    float32 m_flDefaultAnisotropy; // offset 0x658, size 0x4, align 4 | MNetworkEnable
    float32 m_flDefaultScattering; // offset 0x65C, size 0x4, align 4 | MNetworkEnable
    float32 m_flDefaultDrawDistance; // offset 0x660, size 0x4, align 4 | MNetworkEnable
    bool m_bStartDisabled; // offset 0x664, size 0x1, align 1 | MNetworkEnable
    bool m_bEnableIndirect; // offset 0x665, size 0x1, align 1 | MNetworkEnable
    bool m_bIsMaster; // offset 0x666, size 0x1, align 1 | MNetworkEnable
    char _pad_0667[0x1]; // offset 0x667
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // offset 0x668, size 0x8, align 8 | MNetworkEnable
    int32 m_nForceRefreshCount; // offset 0x670, size 0x4, align 4 | MNetworkEnable
    float32 m_fNoiseSpeed; // offset 0x674, size 0x4, align 4 | MNetworkEnable
    float32 m_fNoiseStrength; // offset 0x678, size 0x4, align 4 | MNetworkEnable
    Vector m_vNoiseScale; // offset 0x67C, size 0xC, align 4 | MNetworkEnable
    float32 m_fWindSpeed; // offset 0x688, size 0x4, align 4 | MNetworkEnable
    Vector m_vWindDirection; // offset 0x68C, size 0xC, align 4 | MNetworkEnable
    bool m_bFirstTime; // offset 0x698, size 0x1, align 1
    char _pad_0699[0x7]; // offset 0x699
};
