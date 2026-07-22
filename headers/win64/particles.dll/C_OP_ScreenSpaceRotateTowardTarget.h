#pragma once

class C_OP_ScreenSpaceRotateTowardTarget : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB78, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_vecTargetPosition; // offset 0x1D8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleRemapFloatInput m_flOutputRemap; // offset 0x890, size 0x170, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0xA00, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A04[0x4]; // offset 0xA04
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance; // offset 0xA08, size 0x170, align 8 | MPropertyFriendlyName
};
