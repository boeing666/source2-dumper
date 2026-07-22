#pragma once

class C_OP_ScreenSpacePositionOfTarget : public CParticleFunctionOperator /*0x0*/  // sizeof 0x9D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bOututBehindness; // offset 0x860, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0861[0x3]; // offset 0x861
    ParticleAttributeIndex_t m_nBehindFieldOutput; // offset 0x864, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    CParticleRemapFloatInput m_flBehindOutputRemap; // offset 0x868, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleSetMethod_t m_nBehindSetMethod; // offset 0x9D0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_09D4[0x4]; // offset 0x9D4
};
