#pragma once

class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef /*0x0*/  // sizeof 0xC08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0xC00, size 0x1, align 1
    bool m_bFloodFillAttribute; // offset 0xC01, size 0x1, align 1
    bool m_bSplitNavSpace; // offset 0xC02, size 0x1, align 1
    char _pad_0C03[0x5]; // offset 0xC03
};
