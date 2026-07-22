#pragma once

class CPreviewEntry  // sizeof 0x18, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_soundName; // offset 0x0, size 0x8, align 8
    CUtlString m_trackName; // offset 0x8, size 0x8, align 8
    bool m_bIsSoundEvent; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
