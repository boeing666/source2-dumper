#pragma once

class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x350, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nChildGroupID; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumberOfChildren; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
};
