#pragma once

class C_INIT_InitVec : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_InputValue; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x868, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x86C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalizedOutput; // offset 0x870, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bWritePreviousPosition; // offset 0x871, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0872[0x6]; // offset 0x872
};
