#pragma once

class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator /*0x0*/  // sizeof 0xEF8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01D4[0x4]; // offset 0x1D4
    CPerParticleVecInput m_vecPoint1; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecPoint2; // offset 0x868, size 0x690, align 8 | MPropertyFriendlyName
};
