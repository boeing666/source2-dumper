#pragma once

class C_OP_DistanceToTransform : public CParticleFunctionOperator /*0x0*/  // sizeof 0xF00, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01D4[0x4]; // offset 0x1D4
    CPerParticleFloatInput m_flInputMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x610, size 0x168, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformStart; // offset 0x778, size 0x60, align 8 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x7D8, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x7D9, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_0859[0x3]; // offset 0x859
    ParticleTraceSet_t m_nTraceSet; // offset 0x85C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x860, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x864, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x868, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x86C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAdditive; // offset 0x86D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_086E[0x2]; // offset 0x86E
    CPerParticleVecInput m_vecComponentScale; // offset 0x870, size 0x690, align 8 | MPropertyFriendlyName
};
