#pragma once

struct AggregateMeshInfo_t  // sizeof 0x2C, align 0x4 [trivial_dtor] (resourcecompiler) {MGetKV3ClassDefaults}
{
    uint32 m_nVisClusterMemberOffset; // offset 0x0, size 0x4, align 4
    uint8 m_nVisClusterMemberCount; // offset 0x4, size 0x1, align 1
    bool m_bHasTransform; // offset 0x5, size 0x1, align 1
    uint8 m_nLODGroupMask; // offset 0x6, size 0x1, align 1
    char _pad_0007[0x1]; // offset 0x7
    int16 m_nDrawCallIndex; // offset 0x8, size 0x2, align 2
    int16 m_nLODSetupIndex; // offset 0xA, size 0x2, align 2
    Color m_vTintColor; // offset 0xC, size 0x4, align 1
    ObjectTypeFlags_t m_objectFlags; // offset 0x10, size 0x4, align 4
    int32 m_nLightProbeVolumePrecomputedHandshake; // offset 0x14, size 0x4, align 4
    uint32 m_nInstanceStreamOffset; // offset 0x18, size 0x4, align 4
    uint32 m_nVertexAlbedoStreamOffset; // offset 0x1C, size 0x4, align 4
    uint32 m_nVertexEmissiveStreamOffset; // offset 0x20, size 0x4, align 4
    AggregateInstanceStream_t m_instanceStreams; // offset 0x24, size 0x1, align 1
    char _pad_0025[0x3]; // offset 0x25
    float32 m_fEmissiveFactor; // offset 0x28, size 0x4, align 4
};
