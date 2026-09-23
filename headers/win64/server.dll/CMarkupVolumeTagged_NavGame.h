#pragma once

class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0x8B8, size 0x1, align 1
    bool m_bFloodFillAttribute; // offset 0x8B9, size 0x1, align 1
    bool m_bSplitNavSpace; // offset 0x8BA, size 0x1, align 1
    char _pad_08BB[0x5]; // offset 0x8BB
};
