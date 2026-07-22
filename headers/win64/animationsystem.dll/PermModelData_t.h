#pragma once

struct PermModelData_t  // sizeof 0x2F8, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    PermModelInfo_t m_modelInfo; // offset 0x8, size 0x58, align 8
    CUtlVector< PermModelExtPart_t > m_ExtParts; // offset 0x60, size 0x18, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // offset 0x78, size 0x18, align 8
    CUtlVector< uint64 > m_refMeshGroupMasks; // offset 0x90, size 0x18, align 8
    CUtlVector< uint64 > m_refPhysGroupMasks; // offset 0xA8, size 0x18, align 8
    CUtlVector< uint8 > m_refLODGroupMasks; // offset 0xC0, size 0x18, align 8
    CUtlVector< float32 > m_lodGroupSwitchDistances; // offset 0xD8, size 0x18, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // offset 0xF0, size 0x18, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // offset 0x108, size 0x18, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // offset 0x120, size 0x18, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // offset 0x138, size 0x18, align 8
    CUtlVector< CUtlString > m_meshGroups; // offset 0x150, size 0x18, align 8
    CUtlVector< MaterialGroup_t > m_materialGroups; // offset 0x168, size 0x18, align 8
    uint64 m_nDefaultMeshGroupMask; // offset 0x180, size 0x8, align 8
    ModelSkeletonData_t m_modelSkeleton; // offset 0x188, size 0xA8, align 8
    CUtlVector< int16 > m_remappingTable; // offset 0x230, size 0x18, align 8
    CUtlVector< uint16 > m_remappingTableStarts; // offset 0x248, size 0x18, align 8
    CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // offset 0x260, size 0x18, align 8
    CModelConfigList* m_pModelConfigList; // offset 0x278, size 0x8, align 8
    CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // offset 0x280, size 0x18, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels; // offset 0x298, size 0x18, align 8
    CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes; // offset 0x2B0, size 0x18, align 8
    CUtlVector< ModelAnimGraph2Ref_t > m_animGraph2Refs; // offset 0x2C8, size 0x18, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCNmSkeleton > > m_vecNmSkeletonRefs; // offset 0x2E0, size 0x18, align 8
};
