#pragma once

class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E0]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0x7E0, size 0x1, align 1
    bool m_bFloodFillAttribute; // offset 0x7E1, size 0x1, align 1
    bool m_bSplitNavSpace; // offset 0x7E2, size 0x1, align 1
    char _pad_07E3[0x5]; // offset 0x7E3
};
