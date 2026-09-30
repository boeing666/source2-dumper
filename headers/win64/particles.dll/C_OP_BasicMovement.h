#pragma once

class C_OP_BasicMovement : public CParticleFunctionOperator /*0x0*/  // sizeof 0xEA8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionVecInput m_Gravity; // offset 0x1E0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_fDrag; // offset 0x8B8, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange
    CParticleMassCalculationParameters m_massControls; // offset 0xA30, size 0x470, align 8 | MPropertyFriendlyName
    int32 m_nMaxConstraintPasses; // offset 0xEA0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseNewCode; // offset 0xEA4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EA5[0x3]; // offset 0xEA5
};
