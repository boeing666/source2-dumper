#pragma once

class C_OP_ModelSurfaceSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleModelInput m_modelInput; // offset 0x1F0, size 0x60, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecalcRate; // offset 0x250, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUSpacing; // offset 0x3C8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flVSpacing; // offset 0x540, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSurfaceOffset; // offset 0x6B8, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x830, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUp; // offset 0x831, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetGravity; // offset 0x832, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUV; // offset 0x833, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0834[0x4]; // offset 0x834
};
