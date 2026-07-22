#pragma once

struct CDebugSnapshotData_t  // sizeof 0x130, align 0x10 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_text; // offset 0x0, size 0x8, align 8
    uint32 m_dataType; // offset 0x8, size 0x4, align 4
    uint32 m_userFlags; // offset 0xC, size 0x4, align 4
    uint32 m_userData; // offset 0x10, size 0x4, align 4
    VectorWS m_userVector; // offset 0x14, size 0xC, align 4
    CTransformWS m_userTransform; // offset 0x20, size 0x20, align 16
    CGenericShapeProxy m_userShape; // offset 0x40, size 0x98, align 255
    Color m_drawColor; // offset 0xD8, size 0x4, align 1
    char _pad_00DC[0x4]; // offset 0xDC
    CUtlVector< CDebugDrawHistoryData* > m_vecDebugOverlayData; // offset 0xE0, size 0x18, align 8
    DebugSnapshotBaseStructuredData_t* m_pStructuredData; // offset 0xF8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hEntity; // offset 0x100, size 0x4, align 4
    char _pad_0104[0x4]; // offset 0x104
    CUtlString m_sEntityName; // offset 0x108, size 0x8, align 8
    CEntityIndex m_nEntityIndex; // offset 0x110, size 0x4, align 4
    char _pad_0114[0xC]; // offset 0x114
    CUtlLeanVector< CDebugSnapshotData_t > m_children; // offset 0x120, size 0x10, align 8
};
