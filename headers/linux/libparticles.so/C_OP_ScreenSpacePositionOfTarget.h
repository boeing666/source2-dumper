#pragma once

class C_OP_ScreenSpacePositionOfTarget : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1D8, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bOututBehindness; // offset 0x888, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0889[0x3]; // offset 0x889
    ParticleAttributeIndex_t m_nBehindFieldOutput; // offset 0x88C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    CParticleRemapFloatInput m_flBehindOutputRemap; // offset 0x890, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleSetMethod_t m_nBehindSetMethod; // offset 0xA00, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0A04[0x4]; // offset 0xA04
};
