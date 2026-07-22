#pragma once

class CGradientFog : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // offset 0x4A0, size 0x8, align 8 | MNetworkEnable
    float32 m_flFogStartDistance; // offset 0x4A8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogEndDistance; // offset 0x4AC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bHeightFogEnabled; // offset 0x4B0, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_04B1[0x3]; // offset 0x4B1
    float32 m_flFogStartHeight; // offset 0x4B4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogEndHeight; // offset 0x4B8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFarZ; // offset 0x4BC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMaxOpacity; // offset 0x4C0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogFalloffExponent; // offset 0x4C4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogVerticalExponent; // offset 0x4C8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Color m_fogColor; // offset 0x4CC, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogStrength; // offset 0x4D0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFadeTime; // offset 0x4D4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bStartDisabled; // offset 0x4D8, size 0x1, align 1 | MNetworkEnable
    bool m_bIsEnabled; // offset 0x4D9, size 0x1, align 1 | MNetworkEnable
    bool m_bGradientFogNeedsTextures; // offset 0x4DA, size 0x1, align 1
    char _pad_04DB[0x5]; // offset 0x4DB
};
