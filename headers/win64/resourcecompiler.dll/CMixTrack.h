#pragma once

class CMixTrack : public CMixPropertyBase /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyDescription MPropertyAttributeChoiceName
    int32 m_nMixDownRule; // offset 0x24, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_sendOperator; // offset 0x28, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyDescription MPropertyGroupName
    CUtlString m_Send1; // offset 0x30, size 0x8, align 8 | MPropertyGroupName MPropertyFriendlyName
    CUtlString m_Send2; // offset 0x38, size 0x8, align 8 | MPropertyGroupName MPropertyFriendlyName
    CUtlString m_Send3; // offset 0x40, size 0x8, align 8 | MPropertyGroupName MPropertyFriendlyName
    CUtlString m_Send4; // offset 0x48, size 0x8, align 8 | MPropertyGroupName MPropertyFriendlyName
};
