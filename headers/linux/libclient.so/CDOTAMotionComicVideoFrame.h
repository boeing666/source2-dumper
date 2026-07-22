#pragma once

class CDOTAMotionComicVideoFrame : public CDOTAMotionComicFrame /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    bool m_bLooping; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    float32 m_flAllowSkipAfterDelay; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlString m_sVideoPath; // offset 0x18, size 0x8, align 8
    CUtlString m_sSoundEventName; // offset 0x20, size 0x8, align 8
};
