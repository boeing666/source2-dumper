#pragma once

class CVNodeTypeDesc  // sizeof 0x88, align 0xFF [vtable abstract] (sounddoc_lib)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_name; // offset 0x8, size 0x8, align 8
    CUtlString m_iconName; // offset 0x10, size 0x8, align 8
    CUtlString m_prefix; // offset 0x18, size 0x8, align 8
    CUtlVector< CUtlString > m_inputNames; // offset 0x20, size 0x18, align 8
    CUtlVector< CUtlString > m_outputNames; // offset 0x38, size 0x18, align 8
    CUtlVector< int32 > m_inputTypeIds; // offset 0x50, size 0x18, align 8
    CUtlVector< int32 > m_outputTypeIds; // offset 0x68, size 0x18, align 8
    bool m_bIsGroup; // offset 0x80, size 0x1, align 1
    bool m_bAppliesToMainGraph; // offset 0x81, size 0x1, align 1
    bool m_bAppliesToVoiceGraph; // offset 0x82, size 0x1, align 1
    bool m_bIsAudioTrack; // offset 0x83, size 0x1, align 1
    bool m_bIsAudioOutput; // offset 0x84, size 0x1, align 1
    bool m_bIsControlInput; // offset 0x85, size 0x1, align 1
    bool m_bIsControlOutput; // offset 0x86, size 0x1, align 1
    bool m_bIsSubgraphNode; // offset 0x87, size 0x1, align 1
};
