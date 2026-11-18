#pragma once

struct PulseDocVCDEventInfo_t  // sizeof 0x20, align 0x8 (pulsedoc_lib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    CUtlString m_ActorName; // offset 0x8, size 0x8, align 8
    float32 m_flTime; // offset 0x10, size 0x4, align 4
    int32 m_nEventID; // offset 0x14, size 0x4, align 4
    bool m_bEnabled; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
