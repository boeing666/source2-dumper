#pragma once

class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleTransformInput m_TransformStart; // offset 0x1E0, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x248, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMin; // offset 0x2B0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x420, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x590, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x700, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x870, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x874, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x878, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x8F8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x8FC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08FD[0x3]; // offset 0x8FD
    ParticleSetMethod_t m_nSetMethod; // offset 0x900, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0904[0x4]; // offset 0x904
};
