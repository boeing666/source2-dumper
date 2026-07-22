#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0x7C0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0x788, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0x7A0, size 0x18, align 8
    bool m_bIsGroup; // offset 0x7B8, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0x7B9, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0x7BA, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0x7BB, size 0x1, align 1
    bool m_bIsInGroup; // offset 0x7BC, size 0x1, align 1 | MNotSaved
    char _pad_07BD[0x3]; // offset 0x7BD
};
