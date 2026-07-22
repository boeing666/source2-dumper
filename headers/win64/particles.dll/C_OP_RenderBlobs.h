#pragma once

class C_OP_RenderBlobs : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionRendererFloatInput m_cubeWidth; // offset 0x228, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_cutoffRadius; // offset 0x398, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_renderRadius; // offset 0x508, size 0x170, align 8 | MPropertyFriendlyName
    uint32 m_nVertexCountKb; // offset 0x678, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    uint32 m_nIndexCountKb; // offset 0x67C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    int32 m_nScaleCP; // offset 0x680, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0684[0x4]; // offset 0x684
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x688, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    char _pad_06A0[0x18]; // offset 0x6A0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x6B8, size 0x8, align 8
};
