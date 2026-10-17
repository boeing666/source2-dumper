#pragma once

class CMixTrack : public CMixPropertyBase /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyDescription MPropertyAttributeChoiceName
    VMixMixDownRule_t m_nMixDown; // offset 0x24, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    char _pad_0025[0x1]; // offset 0x25
    VMixSendOperator_t m_nSendOperator; // offset 0x26, size 0x2, align 2 | MPropertyFriendlyName MPropertyDescription MPropertyGroupName
    CUtlString[4] m_SendNames; // offset 0x28, size 0x20, align 8 | MPropertyGroupName MPropertyFriendlyName
};
