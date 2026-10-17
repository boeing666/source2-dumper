#pragma once

class C_OP_ScreenSpaceRotateTowardTarget : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB70, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1D8, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x888, size 0x170, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x9F8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09FC[0x4]; // offset 0x9FC
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance; // offset 0xA00, size 0x170, align 8 | MPropertyFriendlyName
};
