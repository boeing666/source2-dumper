#pragma once

class C_OP_ModelSurfaceSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleModelInput m_modelInput; // offset 0x1E0, size 0x58, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecalcRate; // offset 0x238, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUSpacing; // offset 0x3A8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flVSpacing; // offset 0x518, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSurfaceOffset; // offset 0x688, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x7F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUp; // offset 0x7F9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetGravity; // offset 0x7FA, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUV; // offset 0x7FB, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_07FC[0x4]; // offset 0x7FC
};
