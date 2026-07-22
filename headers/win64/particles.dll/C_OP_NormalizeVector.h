#pragma once

class C_OP_NormalizeVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flScale; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
};
