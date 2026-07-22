#pragma once

class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x698, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    bool m_bUsePerParticleRadius; // offset 0x228, size 0x1, align 1 | MPropertySortPriority MPropertyDescription
    char _pad_0229[0x3]; // offset 0x229
    uint32 m_nVertexCountKb; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    uint32 m_nIndexCountKb; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0234[0x4]; // offset 0x234
    CParticleCollectionRendererFloatInput m_fGridSize; // offset 0x238, size 0x170, align 8
    CParticleCollectionRendererFloatInput m_fRadiusScale; // offset 0x3A8, size 0x170, align 8
    CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // offset 0x518, size 0x170, align 8 | MPropertyAttributeRange
    int32 m_nScaleCP; // offset 0x688, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_068C[0x4]; // offset 0x68C
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x690, size 0x8, align 8
};
