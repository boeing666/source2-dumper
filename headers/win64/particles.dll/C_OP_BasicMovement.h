#pragma once

class C_OP_BasicMovement : public CParticleFunctionOperator /*0x0*/  // sizeof 0xE60, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionVecInput m_Gravity; // offset 0x1D8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_fDrag; // offset 0x890, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange
    CParticleMassCalculationParameters m_massControls; // offset 0xA00, size 0x458, align 8 | MPropertyFriendlyName
    int32 m_nMaxConstraintPasses; // offset 0xE58, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseNewCode; // offset 0xE5C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0E5D[0x3]; // offset 0xE5D
};
