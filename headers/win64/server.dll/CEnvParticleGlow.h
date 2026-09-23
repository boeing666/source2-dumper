#pragma once

class CEnvParticleGlow : public CParticleSystem /*0x0*/  // sizeof 0xDF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xDD8]; // offset 0x0
    float32 m_flAlphaScale; // offset 0xDD8, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0xDDC, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0xDE0, size 0x4, align 4
    Color m_ColorTint; // offset 0xDE4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0xDE8, size 0x8, align 8
};
