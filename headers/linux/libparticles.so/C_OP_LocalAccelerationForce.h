#pragma once

class C_OP_LocalAccelerationForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nCP; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionVecInput m_vecAccel; // offset 0x1E8, size 0x690, align 8 | MPropertyFriendlyName
};
