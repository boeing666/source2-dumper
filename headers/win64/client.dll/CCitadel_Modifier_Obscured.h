#pragma once

class CCitadel_Modifier_Obscured : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flStartObscuredAmount; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x4]; // offset 0x144
    CUtlVectorFixedGrowable< ParticleIndex_t, 3 > m_AmbientParticles; // offset 0x148, size 0x28, align 8
};
