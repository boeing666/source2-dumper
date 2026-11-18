#pragma once

class C_EnvParticleGlow : public C_ParticleSystem /*0x0*/  // sizeof 0x1350, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1338]; // offset 0x0
    float32 m_flAlphaScale; // offset 0x1338, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0x133C, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0x1340, size 0x4, align 4
    Color m_ColorTint; // offset 0x1344, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0x1348, size 0x8, align 8
};
