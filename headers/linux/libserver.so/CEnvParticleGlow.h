#pragma once

class CEnvParticleGlow : public CParticleSystem /*0x0*/  // sizeof 0xFF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xFD8]; // offset 0x0
    float32 m_flAlphaScale; // offset 0xFD8, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0xFDC, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0xFE0, size 0x4, align 4
    Color m_ColorTint; // offset 0xFE4, size 0x4, align 1
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0xFE8, size 0x8, align 8
};
