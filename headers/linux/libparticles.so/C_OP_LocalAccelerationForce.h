#pragma once

class C_OP_LocalAccelerationForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E4]; // offset 0x0
    int32 m_nCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionVecInput m_vecAccel; // offset 0x1F0, size 0x6B0, align 8 | MPropertyFriendlyName
};
