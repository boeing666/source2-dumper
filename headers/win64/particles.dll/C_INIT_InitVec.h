#pragma once

class C_INIT_InitVec : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_InputValue; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x898, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x89C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalizedOutput; // offset 0x8A0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bWritePreviousPosition; // offset 0x8A1, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_08A2[0x6]; // offset 0x8A2
};
