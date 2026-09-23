#pragma once

class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x368, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionFloatInput m_flNumberOfChildren; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
};
