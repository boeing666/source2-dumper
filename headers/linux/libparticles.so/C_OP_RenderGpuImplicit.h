#pragma once

class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x219]; // offset 0x0
    bool m_bUsePerParticleRadius; // offset 0x219, size 0x1, align 1 | MPropertySortPriority MPropertyDescription
    char _pad_021A[0x2]; // offset 0x21A
    uint32 m_nVertexCountKb; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    uint32 m_nIndexCountKb; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0224[0x4]; // offset 0x224
    CParticleCollectionRendererFloatInput m_fGridSize; // offset 0x228, size 0x168, align 8
    CParticleCollectionRendererFloatInput m_fRadiusScale; // offset 0x390, size 0x168, align 8
    CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // offset 0x4F8, size 0x168, align 8 | MPropertyAttributeRange
    int32 m_nScaleCP; // offset 0x660, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0664[0x4]; // offset 0x664
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x668, size 0x8, align 8
};
