#pragma once

struct PulseDocVCDClipInfo_t  // sizeof 0x10, align 0x8 (pulsedoc_lib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    bool m_bLooping; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x7]; // offset 0x9
};
