#pragma once

class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01D4[0x4]; // offset 0x1D4
    CParticleTransformInput m_TransformStart; // offset 0x1D8, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x238, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMin; // offset 0x298, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x400, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x568, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x6D0, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flMaxTraceLength; // offset 0x838, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x83C, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x840, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x8C0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x8C4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_08C5[0x3]; // offset 0x8C5
    ParticleSetMethod_t m_nSetMethod; // offset 0x8C8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_08CC[0x4]; // offset 0x8CC
};
