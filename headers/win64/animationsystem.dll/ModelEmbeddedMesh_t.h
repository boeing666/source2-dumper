#pragma once

struct ModelEmbeddedMesh_t  // sizeof 0x70, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    char _pad_0008[0x8]; // offset 0x8
    int32 m_nMeshIndex; // offset 0x10, size 0x4, align 4
    int32 m_nDataBlock; // offset 0x14, size 0x4, align 4
    int32 m_nMorphBlock; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlVector< ModelMeshBufferData_t > m_vertexBuffers; // offset 0x20, size 0x18, align 8
    CUtlVector< ModelMeshBufferData_t > m_indexBuffers; // offset 0x38, size 0x18, align 8
    CUtlVector< ModelMeshBufferData_t > m_toolsBuffers; // offset 0x50, size 0x18, align 8
    int32 m_nVBIBBlock; // offset 0x68, size 0x4, align 4
    int32 m_nToolsVBBlock; // offset 0x6C, size 0x4, align 4
};
