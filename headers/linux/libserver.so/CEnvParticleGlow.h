#pragma once

class CEnvParticleGlow : public CParticleSystem /*0x0*/  // sizeof 0x1140, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1128]; // offset 0x0
    float32 m_flAlphaScale; // offset 0x1128, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0x112C, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0x1130, size 0x4, align 4
    Color m_ColorTint; // offset 0x1134, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0x1138, size 0x8, align 8
};
