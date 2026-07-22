#pragma once

class C_OP_DistanceToTransform : public CParticleFunctionOperator /*0x0*/  // sizeof 0xF58, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flInputMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformStart; // offset 0x7A0, size 0x68, align 8 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x808, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x809, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_0889[0x3]; // offset 0x889
    ParticleTraceSet_t m_nTraceSet; // offset 0x88C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x890, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x894, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x898, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x89C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAdditive; // offset 0x89D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_089E[0x2]; // offset 0x89E
    CPerParticleVecInput m_vecComponentScale; // offset 0x8A0, size 0x6B8, align 8 | MPropertyFriendlyName
};
