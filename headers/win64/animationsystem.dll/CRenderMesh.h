#pragma once

class CRenderMesh  // sizeof 0x238, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects; // offset 0x10, size 0xC0, align 8
    CUtlLeanVector< CBaseConstraint* > m_constraints; // offset 0xD0, size 0x10, align 8
    CRenderSkeleton m_skeleton; // offset 0xE0, size 0x50, align 8
    char _pad_0130[0xC8]; // offset 0x130
    bool m_bUseUV2ForCharting; // offset 0x1F8, size 0x1, align 1
    bool m_bEmbeddedMapMesh; // offset 0x1F9, size 0x1, align 1
    char _pad_01FA[0x26]; // offset 0x1FA
    DynamicMeshDeformParams_t m_meshDeformParams; // offset 0x220, size 0xC, align 4
    char _pad_022C[0x4]; // offset 0x22C
    CRenderGroom* m_pGroomData; // offset 0x230, size 0x8, align 8
};
