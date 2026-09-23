#pragma once

class C_EnvParticleGlow : public C_ParticleSystem /*0x0*/  // sizeof 0x1680, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1668]; // offset 0x0
    float32 m_flAlphaScale; // offset 0x1668, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0x166C, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0x1670, size 0x4, align 4
    Color m_ColorTint; // offset 0x1674, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0x1678, size 0x8, align 8
};
