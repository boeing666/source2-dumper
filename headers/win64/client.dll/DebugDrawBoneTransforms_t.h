#pragma once

struct DebugDrawBoneTransforms_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x1030, align 0x10 [vtable] (client) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
    char _pad_0000[0x10]; // offset 0x0
    CUtlVectorFixedGrowable< CTransform, 128 > vecBones; // offset 0x10, size 0x1020, align 16
};
