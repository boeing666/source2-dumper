#pragma once

class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x640, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_flClusterRefireTime; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flClusterSize; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flClusterCooldown; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bLimitChildCount; // offset 0x638, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0639[0x7]; // offset 0x639
};
