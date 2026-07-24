#pragma once

struct AnimationSnapshotBase_t  // sizeof 0x110, align 0x10 (animationsystem) {MGetKV3ClassDefaults}
{
    float32 m_flRealTime; // offset 0x0, size 0x4, align 4
    char _pad_0004[0xC]; // offset 0x4
    matrix3x4a_t m_rootToWorld; // offset 0x10, size 0x30, align 16
    bool m_bBonesInWorldSpace; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x7]; // offset 0x41
    CUtlVector< uint32 > m_boneSetupMask; // offset 0x48, size 0x18, align 8
    CUtlVector< matrix3x4a_t > m_boneTransforms; // offset 0x60, size 0x18, align 8
    CUtlVector< float32 > m_flexControllers; // offset 0x78, size 0x18, align 8
    AnimationSnapshotType_t m_SnapshotType; // offset 0x90, size 0x4, align 4
    bool m_bHasDecodeDump; // offset 0x94, size 0x1, align 1
    char _pad_0095[0x3]; // offset 0x95
    AnimationDecodeDebugDumpElement_t m_DecodeDump; // offset 0x98, size 0x70, align 8
    char _pad_0108[0x8]; // offset 0x108
};
