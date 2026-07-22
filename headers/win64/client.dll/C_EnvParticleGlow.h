#pragma once

class C_EnvParticleGlow : public C_ParticleSystem /*0x0*/  // sizeof 0xF70, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF58]; // offset 0x0
    float32 m_flAlphaScale; // offset 0xF58, size 0x4, align 4 | MNetworkEnable
    float32 m_flRadiusScale; // offset 0xF5C, size 0x4, align 4 | MNetworkEnable
    float32 m_flSelfIllumScale; // offset 0xF60, size 0x4, align 4 | MNetworkEnable
    Color m_ColorTint; // offset 0xF64, size 0x4, align 1 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0xF68, size 0x8, align 8 | MNetworkEnable
};
