#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0xB68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0xB30, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0xB48, size 0x18, align 8
    bool m_bIsGroup; // offset 0xB60, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0xB61, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0xB62, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0xB63, size 0x1, align 1
    bool m_bIsInGroup; // offset 0xB64, size 0x1, align 1 | MNotSaved
    char _pad_0B65[0x3]; // offset 0xB65
};
