#pragma once

class C_OP_ScreenSpaceRotateTowardTarget : public CParticleFunctionOperator /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1E0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x8B8, size 0x178, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0xA30, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A34[0x4]; // offset 0xA34
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance; // offset 0xA38, size 0x178, align 8 | MPropertyFriendlyName
};
