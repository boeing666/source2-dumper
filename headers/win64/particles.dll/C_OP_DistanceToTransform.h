#pragma once

class C_OP_DistanceToTransform : public CParticleFunctionOperator /*0x0*/  // sizeof 0xFA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleFloatInput m_flInputMin; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4D8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x650, size 0x178, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformStart; // offset 0x7C8, size 0x68, align 8 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x830, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x831, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_08B1[0x3]; // offset 0x8B1
    ParticleTraceSet_t m_nTraceSet; // offset 0x8B4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x8B8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x8BC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x8C0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x8C4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAdditive; // offset 0x8C5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08C6[0x2]; // offset 0x8C6
    CPerParticleVecInput m_vecComponentScale; // offset 0x8C8, size 0x6D8, align 8 | MPropertyFriendlyName
};
