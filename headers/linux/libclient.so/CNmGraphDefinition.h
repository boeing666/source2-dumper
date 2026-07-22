#pragma once

class CNmGraphDefinition  // sizeof 0x1B8, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
public:
    CGlobalSymbol m_variationID; // offset 0x0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // offset 0x8, size 0x8, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeCNmSkeleton > > m_supportedSecondarySkeletons; // offset 0x10, size 0x18, align 8
    CNmGraphVariationUserData* m_pUserData; // offset 0x28, size 0x8, align 8
    CUtlVector< int16 > m_persistentNodeIndices; // offset 0x30, size 0x18, align 8
    int16 m_nRootNodeIdx; // offset 0x48, size 0x2, align 2
    char _pad_004A[0x6]; // offset 0x4A
    CUtlVector< CGlobalSymbol > m_controlParameterIDs; // offset 0x50, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_virtualParameterIDs; // offset 0x68, size 0x18, align 8
    CUtlVector< int16 > m_virtualParameterNodeIndices; // offset 0x80, size 0x18, align 8
    CUtlVector< CNmGraphDefinition::ReferencedGraphSlot_t > m_referencedGraphSlots; // offset 0x98, size 0x18, align 8
    CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > m_externalGraphSlots; // offset 0xB0, size 0x18, align 8
    CUtlVector< CNmGraphDefinition::ExternalPoseSlot_t > m_externalPoseSlots; // offset 0xC8, size 0x18, align 8
    char _pad_00E0[0x70]; // offset 0xE0
    CUtlVector< CUtlString > m_nodePaths; // offset 0x150, size 0x18, align 8
    CUtlVector< CStrongHandleVoid > m_resources; // offset 0x168, size 0x18, align 8
    char _pad_0180[0x38]; // offset 0x180
};
