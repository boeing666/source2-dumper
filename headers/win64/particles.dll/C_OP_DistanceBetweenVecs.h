#pragma once

class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1518, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleVecInput m_vecPoint1; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecPoint2; // offset 0x898, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMin; // offset 0xF50, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x10C0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x1230, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x13A0, size 0x170, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1510, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bDeltaTime; // offset 0x1514, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1515[0x3]; // offset 0x1515
};
