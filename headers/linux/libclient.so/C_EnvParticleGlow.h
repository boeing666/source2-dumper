#pragma once

class C_EnvParticleGlow : public C_ParticleSystem /*0x0*/  // sizeof 0x11F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11E0]; // offset 0x0
    float32 m_flAlphaScale; // offset 0x11E0, size 0x4, align 4
    float32 m_flRadiusScale; // offset 0x11E4, size 0x4, align 4
    float32 m_flSelfIllumScale; // offset 0x11E8, size 0x4, align 4
    Color m_ColorTint; // offset 0x11EC, size 0x4, align 1
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // offset 0x11F0, size 0x8, align 8
};
