#pragma once

class CNmClipDocEventTrack  // sizeof 0x28, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CNmClipDocEvent* > m_events; // offset 0x0, size 0x18, align 8
    CUtlString m_eventClassName; // offset 0x18, size 0x8, align 8
    CNmClipDocEventTrack::Type_t m_type; // offset 0x20, size 0x4, align 4
    bool m_bIsSyncTrack; // offset 0x24, size 0x1, align 1
    bool m_bIsDisabled; // offset 0x25, size 0x1, align 1
    char _pad_0026[0x2]; // offset 0x26
};
