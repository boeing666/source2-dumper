#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0xB70, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0xB38, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0xB50, size 0x18, align 8
    bool m_bIsGroup; // offset 0xB68, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0xB69, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0xB6A, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0xB6B, size 0x1, align 1
    bool m_bIsInGroup; // offset 0xB6C, size 0x1, align 1 | MNotSaved
    char _pad_0B6D[0x3]; // offset 0xB6D
};
