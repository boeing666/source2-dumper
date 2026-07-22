#pragma once

class CEnvParticleGlow : public CParticleSystem /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    float32 m_flAlphaScale; // offset 0xCF8, size 0x4, align 4 | MNetworkEnable
    float32 m_flRadiusScale; // offset 0xCFC, size 0x4, align 4 | MNetworkEnable
    float32 m_flSelfIllumScale; // offset 0xD00, size 0x4, align 4 | MNetworkEnable
    Color m_ColorTint; // offset 0xD04, size 0x4, align 1 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0xD08, size 0x8, align 8 | MNetworkEnable
};
