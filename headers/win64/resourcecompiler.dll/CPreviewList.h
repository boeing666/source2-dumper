#pragma once

class CPreviewList  // sizeof 0x20, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CPreviewEntry > m_sounds; // offset 0x0, size 0x18, align 8
    bool m_bPreviewInGame; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
