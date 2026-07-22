#pragma once

class CRenderMesh  // sizeof 0x210, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects; // offset 0x10, size 0xA8, align 8
    CUtlLeanVector< CBaseConstraint* > m_constraints; // offset 0xB8, size 0x10, align 8
    CRenderSkeleton m_skeleton; // offset 0xC8, size 0x50, align 8
    char _pad_0118[0xBC]; // offset 0x118
    bool m_bUseUV2ForCharting; // offset 0x1D4, size 0x1, align 1
    bool m_bEmbeddedMapMesh; // offset 0x1D5, size 0x1, align 1
    char _pad_01D6[0x22]; // offset 0x1D6
    DynamicMeshDeformParams_t m_meshDeformParams; // offset 0x1F8, size 0xC, align 4
    char _pad_0204[0x4]; // offset 0x204
    CRenderGroom* m_pGroomData; // offset 0x208, size 0x8, align 8
};
