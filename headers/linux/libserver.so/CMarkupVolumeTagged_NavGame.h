#pragma once

class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef /*0x0*/  // sizeof 0xB98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB90]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0xB90, size 0x1, align 1
    bool m_bFloodFillAttribute; // offset 0xB91, size 0x1, align 1
    bool m_bSplitNavSpace; // offset 0xB92, size 0x1, align 1
    char _pad_0B93[0x5]; // offset 0xB93
};
