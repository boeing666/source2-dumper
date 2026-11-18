#pragma once

class C_OP_RenderBlobs : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21D]; // offset 0x0
    bool m_bUseParticleColorForVertColor; // offset 0x21D, size 0x1, align 1
    char _pad_021E[0x2]; // offset 0x21E
    CParticleCollectionRendererFloatInput m_cubeWidth; // offset 0x220, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_cutoffRadius; // offset 0x390, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_renderRadius; // offset 0x500, size 0x170, align 8 | MPropertyFriendlyName
    uint32 m_nVertexCountKb; // offset 0x670, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    uint32 m_nIndexCountKb; // offset 0x674, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    int32 m_nScaleCP; // offset 0x678, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_067C[0x4]; // offset 0x67C
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x680, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    char _pad_0698[0x18]; // offset 0x698
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x6B0, size 0x8, align 8
};
