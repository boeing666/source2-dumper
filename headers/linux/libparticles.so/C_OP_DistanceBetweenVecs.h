#pragma once

class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleVecInput m_vecPoint1; // offset 0x1E0, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecPoint2; // offset 0x890, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMin; // offset 0xF40, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x10B0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x1220, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x1390, size 0x170, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1500, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDeltaTime; // offset 0x1504, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1505[0x3]; // offset 0x1505
};
