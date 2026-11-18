#pragma once

struct PulseDocVCDInfo_t  // sizeof 0xE0, align 0x8 (pulsedoc_lib) {MGetKV3ClassDefaults}
{
    CUtlVector< CUtlString > m_Actors; // offset 0x0, size 0x18, align 8
    CUtlVector< PulseDocVCDAnchorInfo_t > m_Anchors; // offset 0x18, size 0x18, align 8
    CUtlVector< CUtlString > m_ExternalGraphs; // offset 0x30, size 0x18, align 8
    CUtlVector< PulseDocVCDClipInfo_t > m_ExternalClips; // offset 0x48, size 0x18, align 8
    CUtlVector< CUtlString > m_ExternalSequences; // offset 0x60, size 0x18, align 8
    CUtlVector< CUtlString > m_TargetOverrides; // offset 0x78, size 0x18, align 8
    CUtlVector< PulseDocVCDEventInfo_t > m_Triggers; // offset 0x90, size 0x18, align 8
    CUtlVector< PulseDocVCDEventInfo_t > m_Requirements; // offset 0xA8, size 0x18, align 8
    PulseDocVCDEventInfo_t m_FirstSpeak; // offset 0xC0, size 0x20, align 8
};
