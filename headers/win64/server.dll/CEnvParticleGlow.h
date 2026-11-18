#pragma once

class CEnvParticleGlow : public CParticleSystem /*0x0*/  // sizeof 0xE58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xE40]; // offset 0x0
    float32 m_flAlphaScale; // offset 0xE40, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0xE44, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0xE48, size 0x4, align 4
    Color m_ColorTint; // offset 0xE4C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0xE50, size 0x8, align 8
};
