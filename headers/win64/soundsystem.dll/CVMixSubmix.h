#pragma once

class CVMixSubmix  // sizeof 0x40, align 0xFF (soundsystem_lowlevel)
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString m_sendOperator; // offset 0x8, size 0x8, align 8
    CUtlString[4] m_SendNames; // offset 0x10, size 0x20, align 8
    uint32 m_nSoloNameHash; // offset 0x30, size 0x4, align 4
    int32 m_nChannels; // offset 0x34, size 0x4, align 4
    int32 m_nMixDownRule; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
