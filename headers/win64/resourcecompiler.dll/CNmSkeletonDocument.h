#pragma once

class CNmSkeletonDocument : public CNmAnimDocument /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlString m_sourceFilename; // offset 0x70, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_rootBoneName; // offset 0x78, size 0x8, align 8
    float32 m_flGlobalScale; // offset 0x80, size 0x4, align 4
    bool m_bIsAttachableProp; // offset 0x84, size 0x1, align 1
    bool m_bIsCS_HACK; // offset 0x85, size 0x1, align 1
    char _pad_0086[0x2]; // offset 0x86
    CUtlVector< CNmSkeletonDocument::SecondarySkeleton_t > m_secondarySkeletons; // offset 0x88, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    CUtlVector< CGlobalSymbol > m_gameplayRelevantBones; // offset 0xA0, size 0x18, align 8 | MPropertyDescription
    CUtlVector< CGlobalSymbol > m_highLODBones; // offset 0xB8, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< NmBoneMaskSetDefinition_t > m_boneMaskSetDefinitions; // offset 0xD0, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CNmFloatChannelSet_t > m_floatChannelSets; // offset 0xE8, size 0x18, align 8 | MPropertySuppressField
    CUtlString m_previewModelName; // offset 0x100, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor
    char _pad_0108[0x18]; // offset 0x108
};
