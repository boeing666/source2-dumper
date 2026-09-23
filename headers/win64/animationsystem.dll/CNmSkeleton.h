#pragma once

class CNmSkeleton  // sizeof 0x100, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
public:
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    CUtlLeanVector< CGlobalSymbol > m_boneIDs; // offset 0x8, size 0x10, align 8
    CUtlVector< int32 > m_parentIndices; // offset 0x18, size 0x18, align 8
    CUtlVector< CTransform > m_parentSpaceReferencePose; // offset 0x30, size 0x18, align 8
    CUtlVector< CTransform > m_modelSpaceReferencePose; // offset 0x48, size 0x18, align 8
    int32 m_numBonesToSampleAtLowLOD; // offset 0x60, size 0x4, align 4
    bool m_bIsPropSkeleton; // offset 0x64, size 0x1, align 1
    char _pad_0065[0x23]; // offset 0x65
    CUtlLeanVector< NmBoneMaskSetDefinition_t > m_maskDefinitions; // offset 0x88, size 0x10, align 8
    char _pad_0098[0x10]; // offset 0x98
    CUtlLeanVector< CNmSkeleton::SecondarySkeleton_t > m_secondarySkeletons; // offset 0xA8, size 0x10, align 8
    CUtlLeanVector< CNmFloatChannelSet_t > m_floatChannelSets; // offset 0xB8, size 0x10, align 8
    CUtlVector< CNmSkeleton::ContactConfig_t > m_contactConfigs; // offset 0xC8, size 0x18, align 8
    CUtlVector< int32 > m_gameplayRelevantBoneIndices; // offset 0xE0, size 0x18, align 8
    int64 m_nSpecialDependencyHash; // offset 0xF8, size 0x8, align 8
};
