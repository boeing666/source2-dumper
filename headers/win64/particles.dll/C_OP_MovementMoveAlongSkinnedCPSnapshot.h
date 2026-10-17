#pragma once

class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRadius; // offset 0x1E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EA[0x6]; // offset 0x1EA
    CPerParticleFloatInput m_flInterpolation; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTValue; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
};
