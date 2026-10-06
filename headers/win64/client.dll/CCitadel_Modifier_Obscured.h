#pragma once

class CCitadel_Modifier_Obscured : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flStartObscuredAmount; // offset 0x138, size 0x4, align 4
    char _pad_013C[0x4]; // offset 0x13C
    CUtlVectorFixedGrowable< ParticleIndex_t, 3 > m_AmbientParticles; // offset 0x140, size 0x28, align 8
};
