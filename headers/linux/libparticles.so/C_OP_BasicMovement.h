#pragma once

class C_OP_BasicMovement : public CParticleFunctionOperator /*0x0*/  // sizeof 0xE10, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CParticleCollectionVecInput m_Gravity; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_fDrag; // offset 0x860, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange
    CParticleMassCalculationParameters m_massControls; // offset 0x9C8, size 0x440, align 8 | MPropertyFriendlyName
    int32 m_nMaxConstraintPasses; // offset 0xE08, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseNewCode; // offset 0xE0C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0E0D[0x3]; // offset 0xE0D
};
