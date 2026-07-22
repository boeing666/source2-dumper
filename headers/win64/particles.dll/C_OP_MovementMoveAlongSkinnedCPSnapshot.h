#pragma once

class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRadius; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x6]; // offset 0x1E2
    CPerParticleFloatInput m_flInterpolation; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTValue; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
};
