#pragma once

class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x358, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_flDuration; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bDestroyImmediately; // offset 0x350, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPlayEndCap; // offset 0x351, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0352[0x6]; // offset 0x352
};
