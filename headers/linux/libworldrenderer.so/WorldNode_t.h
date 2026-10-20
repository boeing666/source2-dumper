#pragma once

struct WorldNode_t  // sizeof 0x190, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    CUtlVector< SceneObject_t > m_sceneObjects; // offset 0x0, size 0x18, align 8
    CUtlVector< uint16 > m_visClusterMembership; // offset 0x18, size 0x18, align 8
    CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // offset 0x30, size 0x18, align 8
    CUtlVector< ClutterSceneObject_t > m_clutterSceneObjects; // offset 0x48, size 0x18, align 8
    CUtlVector< AggregateRTProxySceneObject_t > m_rtProxies; // offset 0x60, size 0x18, align 8
    CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // offset 0x78, size 0x18, align 8
    CUtlVector< MaterialOverride_t > m_materialOverrides; // offset 0x90, size 0x18, align 8
    CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // offset 0xA8, size 0x18, align 8
    CUtlVector< AggregateInstanceStreamOnDiskData_t > m_aggregateInstanceStreams; // offset 0xC0, size 0x18, align 8
    CUtlVector< AggregateVertexAlbedoStreamOnDiskData_t > m_vertexAlbedoStreams; // offset 0xD8, size 0x18, align 8
    CUtlVector< AggregateVertexEmissiveStreamOnDiskData_t > m_vertexEmissiveStreams; // offset 0xF0, size 0x18, align 8
    CUtlVector< CUtlString > m_layerNames; // offset 0x108, size 0x18, align 8
    CUtlVector< uint8 > m_sceneObjectLayerIndices; // offset 0x120, size 0x18, align 8
    CUtlString m_grassFileName; // offset 0x138, size 0x8, align 8
    BakedLightingInfo_t m_nodeLightingInfo; // offset 0x140, size 0x48, align 8
    bool m_bHasBakedGeometryFlag; // offset 0x188, size 0x1, align 1
    char _pad_0189[0x7]; // offset 0x189
};
