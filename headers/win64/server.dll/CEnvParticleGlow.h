#pragma once

class CEnvParticleGlow : public CParticleSystem /*0x0*/  // sizeof 0xE18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    float32 m_flAlphaScale; // offset 0xE00, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0xE04, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0xE08, size 0x4, align 4
    Color m_ColorTint; // offset 0xE0C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0xE10, size 0x8, align 8
};
