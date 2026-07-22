#pragma once

class CVMixAutomaticControlInput  // sizeof 0x10, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    int32 m_nControlInputIndex; // offset 0x8, size 0x4, align 4
    bool m_bIsTrackSend; // offset 0xC, size 0x1, align 1
    bool m_bIsStackVar; // offset 0xD, size 0x1, align 1
    char _pad_000E[0x2]; // offset 0xE
};
