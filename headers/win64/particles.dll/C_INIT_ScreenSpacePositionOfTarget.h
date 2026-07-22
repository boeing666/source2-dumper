#pragma once

class C_INIT_ScreenSpacePositionOfTarget : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bOututBehindness; // offset 0x898, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0899[0x3]; // offset 0x899
    ParticleAttributeIndex_t m_nBehindFieldOutput; // offset 0x89C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    CParticleRemapFloatInput m_flBehindOutputRemap; // offset 0x8A0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
