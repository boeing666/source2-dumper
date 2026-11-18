#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0xBD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0xBA0, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0xBB8, size 0x18, align 8
    bool m_bIsGroup; // offset 0xBD0, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0xBD1, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0xBD2, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0xBD3, size 0x1, align 1
    bool m_bIsInGroup; // offset 0xBD4, size 0x1, align 1 | MNotSaved
    char _pad_0BD5[0x3]; // offset 0xBD5
};
