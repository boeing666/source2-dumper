#pragma once

class C_OP_ModelSurfaceSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleModelInput m_modelInput; // offset 0x1E8, size 0x60, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecalcRate; // offset 0x248, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUSpacing; // offset 0x3B8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flVSpacing; // offset 0x528, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSurfaceOffset; // offset 0x698, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x808, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUp; // offset 0x809, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetGravity; // offset 0x80A, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetUV; // offset 0x80B, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_080C[0x4]; // offset 0x80C
};
