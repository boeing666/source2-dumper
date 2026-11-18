#pragma once

class CRenderMesh  // sizeof 0x280, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects; // offset 0x10, size 0xC8, align 8
    CUtlLeanVector< CBaseConstraint* > m_constraints; // offset 0xD8, size 0x10, align 8
    CRenderSkeleton m_skeleton; // offset 0xE8, size 0x50, align 8
    char _pad_0138[0x10C]; // offset 0x138
    bool m_bUseUV2ForCharting; // offset 0x244, size 0x1, align 1
    bool m_bEmbeddedMapMesh; // offset 0x245, size 0x1, align 1
    char _pad_0246[0x22]; // offset 0x246
    DynamicMeshDeformParams_t m_meshDeformParams; // offset 0x268, size 0xC, align 4
    char _pad_0274[0x4]; // offset 0x274
    CRenderGroom* m_pGroomData; // offset 0x278, size 0x8, align 8
};
