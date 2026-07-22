#pragma once

struct VPhysicsCollisionAttribute_t  // sizeof 0x30, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    uint64 m_nInteractsAs; // offset 0x8, size 0x8, align 8
    uint64 m_nInteractsWith; // offset 0x10, size 0x8, align 8
    uint64 m_nInteractsExclude; // offset 0x18, size 0x8, align 8
    uint32 m_nEntityId; // offset 0x20, size 0x4, align 4
    uint32 m_nOwnerId; // offset 0x24, size 0x4, align 4
    uint16 m_nHierarchyId; // offset 0x28, size 0x2, align 2
    uint16 m_nDetailLayerMask; // offset 0x2A, size 0x2, align 2
    uint8 m_nDetailLayerMaskType; // offset 0x2C, size 0x1, align 1
    uint8 m_nTargetDetailLayer; // offset 0x2D, size 0x1, align 1
    uint8 m_nCollisionGroup; // offset 0x2E, size 0x1, align 1
    uint8 m_nCollisionFunctionMask; // offset 0x2F, size 0x1, align 1
};
