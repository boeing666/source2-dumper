#pragma once

class C_OP_RenderBlobs : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    CParticleCollectionRendererFloatInput m_cubeWidth; // offset 0x230, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_cutoffRadius; // offset 0x3A8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_renderRadius; // offset 0x520, size 0x178, align 8 | MPropertyFriendlyName
    uint32 m_nVertexCountKb; // offset 0x698, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    uint32 m_nIndexCountKb; // offset 0x69C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    int32 m_nScaleCP; // offset 0x6A0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_06A4[0x4]; // offset 0x6A4
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x6A8, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    char _pad_06C0[0x18]; // offset 0x6C0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x6D8, size 0x8, align 8
};
