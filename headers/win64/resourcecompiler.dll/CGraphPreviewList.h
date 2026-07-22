#pragma once

class CGraphPreviewList  // sizeof 0x28, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    float32 m_flVolume; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CPreviewList m_previewList; // offset 0x8, size 0x20, align 8
};
