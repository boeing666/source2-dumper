#pragma once

class CVMixAutomaticControlInput  // sizeof 0x18, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    char _pad_0008[0x4]; // offset 0x8
    int32 m_nGraphInputIndex; // offset 0xC, size 0x4, align 4
    VMixAutoControlType_t m_nControlType; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
