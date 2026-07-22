#pragma once

class CRenderMesh  // sizeof 0x230, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects; // offset 0x10, size 0xC0, align 8
    CUtlLeanVector< CBaseConstraint* > m_constraints; // offset 0xD0, size 0x10, align 8
    CRenderSkeleton m_skeleton; // offset 0xE0, size 0x50, align 8
    char _pad_0130[0xC4]; // offset 0x130
    bool m_bUseUV2ForCharting; // offset 0x1F4, size 0x1, align 1
    bool m_bEmbeddedMapMesh; // offset 0x1F5, size 0x1, align 1
    char _pad_01F6[0x22]; // offset 0x1F6
    DynamicMeshDeformParams_t m_meshDeformParams; // offset 0x218, size 0xC, align 4
    char _pad_0224[0x4]; // offset 0x224
    CRenderGroom* m_pGroomData; // offset 0x228, size 0x8, align 8
};
