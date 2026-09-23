#pragma once

class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CPerParticleFloatInput m_flInputMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nStartCP; // offset 0x7A0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLOS; // offset 0x7A4, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x7A5, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_0825[0x3]; // offset 0x825
    ParticleTraceSet_t m_nTraceSet; // offset 0x828, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_082C[0x4]; // offset 0x82C
    CPerParticleFloatInput m_flMaxTraceLength; // offset 0x830, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flLOSScale; // offset 0x9A0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x9A4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x9A8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_09A9[0x3]; // offset 0x9A9
    Vector m_vecDistanceScale; // offset 0x9AC, size 0xC, align 4 | MPropertyFriendlyName
    float32 m_flRemapBias; // offset 0x9B8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09BC[0x4]; // offset 0x9BC
};
