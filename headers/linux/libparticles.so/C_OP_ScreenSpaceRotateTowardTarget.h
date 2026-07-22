#pragma once

class C_OP_ScreenSpaceRotateTowardTarget : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x860, size 0x168, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x9C8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09CC[0x4]; // offset 0x9CC
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance; // offset 0x9D0, size 0x168, align 8 | MPropertyFriendlyName
};
