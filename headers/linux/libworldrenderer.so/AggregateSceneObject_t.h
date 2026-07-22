#pragma once

struct AggregateSceneObject_t  // sizeof 0x78, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    ObjectTypeFlags_t m_allFlags; // offset 0x0, size 0x4, align 4
    ObjectTypeFlags_t m_anyFlags; // offset 0x4, size 0x4, align 4
    int16 m_nLayer; // offset 0x8, size 0x2, align 2
    int16 m_instanceStream; // offset 0xA, size 0x2, align 2
    int16 m_vertexAlbedoStream; // offset 0xC, size 0x2, align 2
    int16 m_vertexEmissiveStream; // offset 0xE, size 0x2, align 2
    CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // offset 0x10, size 0x18, align 8
    CUtlVector< AggregateLODSetup_t > m_lodSetups; // offset 0x28, size 0x18, align 8
    CUtlVector< uint16 > m_visClusterMembership; // offset 0x40, size 0x18, align 8
    CUtlVector< matrix3x4_t > m_fragmentTransforms; // offset 0x58, size 0x18, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // offset 0x70, size 0x8, align 8
};
