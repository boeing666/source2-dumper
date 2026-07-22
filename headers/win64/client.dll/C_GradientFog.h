#pragma once

class C_GradientFog : public C_BaseEntity /*0x0*/  // sizeof 0x688, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // offset 0x5F0, size 0x8, align 8 | MNetworkEnable
    float32 m_flFogStartDistance; // offset 0x5F8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogEndDistance; // offset 0x5FC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bHeightFogEnabled; // offset 0x600, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0601[0x3]; // offset 0x601
    float32 m_flFogStartHeight; // offset 0x604, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogEndHeight; // offset 0x608, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFarZ; // offset 0x60C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMaxOpacity; // offset 0x610, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogFalloffExponent; // offset 0x614, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogVerticalExponent; // offset 0x618, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Color m_fogColor; // offset 0x61C, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogStrength; // offset 0x620, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFadeTime; // offset 0x624, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bStartDisabled; // offset 0x628, size 0x1, align 1 | MNetworkEnable
    bool m_bIsEnabled; // offset 0x629, size 0x1, align 1 | MNetworkEnable
    bool m_bGradientFogNeedsTextures; // offset 0x62A, size 0x1, align 1
    char _pad_062B[0x5D]; // offset 0x62B
};
