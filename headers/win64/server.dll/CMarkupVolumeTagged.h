#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0x8B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x880]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0x880, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0x898, size 0x18, align 8
    bool m_bIsGroup; // offset 0x8B0, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0x8B1, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0x8B2, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0x8B3, size 0x1, align 1
    bool m_bIsInGroup; // offset 0x8B4, size 0x1, align 1 | MNotSaved
    char _pad_08B5[0x3]; // offset 0x8B5
};
