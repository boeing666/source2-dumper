#pragma once

class CEffectsPreviewList  // sizeof 0x30, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_previewGraphInput; // offset 0x0, size 0x8, align 8
    float32 m_flMix; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CPreviewList m_previewList; // offset 0x10, size 0x20, align 8
};
