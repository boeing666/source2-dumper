#pragma once

class CVMixSubmix  // sizeof 0x38, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString[4] m_SendNames; // offset 0x8, size 0x20, align 8
    char _pad_0028[0x4]; // offset 0x28
    uint32 m_nSoloNameHash; // offset 0x2C, size 0x4, align 4
    int32 m_nChannels; // offset 0x30, size 0x4, align 4
    VMixSendOperator_t m_nSendOperator; // offset 0x34, size 0x2, align 2 | MPropertyFriendlyName
    VMixMixDownRule_t m_nMixDownRule; // offset 0x36, size 0x1, align 1
    char _pad_0037[0x1]; // offset 0x37
};
