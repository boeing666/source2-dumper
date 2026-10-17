#pragma once

struct DebugDrawBoneTransforms_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x50, align 0x10 [vtable] (client) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
    char _pad_0000[0x10]; // offset 0x0
    CTransform m_rootToWorld; // offset 0x10, size 0x20, align 16
    int32 m_nBoneCount; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< uint16 > m_packed; // offset 0x38, size 0x18, align 8
};
