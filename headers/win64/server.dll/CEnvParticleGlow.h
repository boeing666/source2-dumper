#pragma once

class CEnvParticleGlow : public CParticleSystem /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    float32 m_flAlphaScale; // offset 0xD00, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0xD04, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0xD08, size 0x4, align 4
    Color m_ColorTint; // offset 0xD0C, size 0x4, align 1
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0xD10, size 0x8, align 8
};
