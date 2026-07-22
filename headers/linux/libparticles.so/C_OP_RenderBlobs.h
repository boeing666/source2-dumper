#pragma once

class C_OP_RenderBlobs : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x6A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CParticleCollectionRendererFloatInput m_cubeWidth; // offset 0x220, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_cutoffRadius; // offset 0x388, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_renderRadius; // offset 0x4F0, size 0x168, align 8 | MPropertyFriendlyName
    uint32 m_nVertexCountKb; // offset 0x658, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    uint32 m_nIndexCountKb; // offset 0x65C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    int32 m_nScaleCP; // offset 0x660, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0664[0x4]; // offset 0x664
    CUtlVector< MaterialVariable_t > m_MaterialVars; // offset 0x668, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertySortPriority
    char _pad_0680[0x18]; // offset 0x680
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x698, size 0x8, align 8
};
