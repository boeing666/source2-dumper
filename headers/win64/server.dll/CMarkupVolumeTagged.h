#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0x898, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0x860, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0x878, size 0x18, align 8
    bool m_bIsGroup; // offset 0x890, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0x891, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0x892, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0x893, size 0x1, align 1
    bool m_bIsInGroup; // offset 0x894, size 0x1, align 1 | MNotSaved
    char _pad_0895[0x3]; // offset 0x895
};
