#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0x7B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0x780, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0x798, size 0x18, align 8
    bool m_bIsGroup; // offset 0x7B0, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0x7B1, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0x7B2, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0x7B3, size 0x1, align 1
    bool m_bIsInGroup; // offset 0x7B4, size 0x1, align 1 | MNotSaved
    char _pad_07B5[0x3]; // offset 0x7B5
};
