#pragma once

class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAB0]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0xAB0, size 0x1, align 1
    bool m_bFloodFillAttribute; // offset 0xAB1, size 0x1, align 1
    bool m_bSplitNavSpace; // offset 0xAB2, size 0x1, align 1
    char _pad_0AB3[0x5]; // offset 0xAB3
};
