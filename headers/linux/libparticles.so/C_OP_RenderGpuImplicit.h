#pragma once

class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x690, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x21D]; // offset 0x0
    bool m_bUsePerParticleRadius; // offset 0x21D, size 0x1, align 1 | MPropertySortPriority MPropertyDescription
    char _pad_021E[0x2]; // offset 0x21E
    uint32 m_nVertexCountKb; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    uint32 m_nIndexCountKb; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    CParticleCollectionRendererFloatInput m_fGridSize; // offset 0x228, size 0x170, align 8
    CParticleCollectionRendererFloatInput m_fRadiusScale; // offset 0x398, size 0x170, align 8
    CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // offset 0x508, size 0x170, align 8 | MPropertyAttributeRange
    int32 m_nScaleCP; // offset 0x678, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_067C[0x4]; // offset 0x67C
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x680, size 0x8, align 8
    bool m_bUseParticleColorForVertColor; // offset 0x688, size 0x1, align 1
    char _pad_0689[0x7]; // offset 0x689
};
