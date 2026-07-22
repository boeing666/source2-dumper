#pragma once

class C_EnvParticleGlow : public C_ParticleSystem /*0x0*/  // sizeof 0x1520, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1508]; // offset 0x0
    float32 m_flAlphaScale; // offset 0x1508, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0x150C, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0x1510, size 0x4, align 4
    Color m_ColorTint; // offset 0x1514, size 0x4, align 1
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0x1518, size 0x8, align 8
};
