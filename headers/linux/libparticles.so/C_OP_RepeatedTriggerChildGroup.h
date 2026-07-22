#pragma once

class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flClusterRefireTime; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flClusterSize; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flClusterCooldown; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bLimitChildCount; // offset 0x610, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0611[0x7]; // offset 0x611
};
