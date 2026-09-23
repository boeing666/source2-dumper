#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0x890, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0x858, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0x870, size 0x18, align 8
    bool m_bIsGroup; // offset 0x888, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0x889, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0x88A, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0x88B, size 0x1, align 1
    bool m_bIsInGroup; // offset 0x88C, size 0x1, align 1 | MNotSaved
    char _pad_088D[0x3]; // offset 0x88D
};
