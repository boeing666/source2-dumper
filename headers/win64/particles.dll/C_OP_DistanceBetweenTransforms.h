#pragma once

class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleTransformInput m_TransformStart; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x250, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMin; // offset 0x2B8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x430, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x5A8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x720, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x898, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x89C, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x8A0, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x920, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x924, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0925[0x3]; // offset 0x925
    ParticleSetMethod_t m_nSetMethod; // offset 0x928, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_092C[0x4]; // offset 0x92C
};
