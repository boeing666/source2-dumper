#pragma once

class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x358, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_flNumberOfChildren; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
};
