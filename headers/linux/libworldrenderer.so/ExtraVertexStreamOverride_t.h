#pragma once

struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t /*0x0*/  // sizeof 0x30, align 0x8 [trivial_dtor] (worldrenderer) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x4]; // offset 0x0
    uint32 m_nSubSceneObject; // offset 0x4, size 0x4, align 4
    uint32 m_nDrawCallIndex; // offset 0x8, size 0x4, align 4
    MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // offset 0xC, size 0x4, align 4
    CRenderBufferBinding m_extraBufferBinding; // offset 0x10, size 0x20, align 8
};
