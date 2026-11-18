#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0x8F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8C0]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0x8C0, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0x8D8, size 0x18, align 8
    bool m_bIsGroup; // offset 0x8F0, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0x8F1, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0x8F2, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0x8F3, size 0x1, align 1
    bool m_bIsInGroup; // offset 0x8F4, size 0x1, align 1 | MNotSaved
    char _pad_08F5[0x3]; // offset 0x8F5
};
