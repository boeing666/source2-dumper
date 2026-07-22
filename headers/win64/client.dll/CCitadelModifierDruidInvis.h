#pragma once

class CCitadelModifierDruidInvis : public CCitadelModifier /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    float32 m_flCurrentObscureLevel; // offset 0xC0, size 0x4, align 4
    int32 m_nInvisModifierID; // offset 0xC4, size 0x4, align 4
    CUtlVectorFixedGrowable< ParticleIndex_t, 3 > m_AmbientParticles; // offset 0xC8, size 0x28, align 8
};
