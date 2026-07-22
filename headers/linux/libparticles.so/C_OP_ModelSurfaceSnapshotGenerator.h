#pragma once

class C_OP_ModelSurfaceSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x1D8, size 0x58, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecalcRate; // offset 0x230, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUSpacing; // offset 0x398, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flVSpacing; // offset 0x500, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSurfaceOffset; // offset 0x668, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x7D0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUp; // offset 0x7D1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetGravity; // offset 0x7D2, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUV; // offset 0x7D3, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_07D4[0x4]; // offset 0x7D4
};
