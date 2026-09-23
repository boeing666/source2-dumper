#pragma once

class C_OP_ScreenSpacePositionOfTarget : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1E0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bOututBehindness; // offset 0x8B8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08B9[0x3]; // offset 0x8B9
    ParticleAttributeIndex_t m_nBehindFieldOutput; // offset 0x8BC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    CParticleRemapFloatInput m_flBehindOutputRemap; // offset 0x8C0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleSetMethod_t m_nBehindSetMethod; // offset 0xA38, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0A3C[0x4]; // offset 0xA3C
};
