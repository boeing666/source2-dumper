#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0xA88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0xA50, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0xA68, size 0x18, align 8
    bool m_bIsGroup; // offset 0xA80, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0xA81, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0xA82, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0xA83, size 0x1, align 1
    bool m_bIsInGroup; // offset 0xA84, size 0x1, align 1 | MNotSaved
    char _pad_0A85[0x3]; // offset 0xA85
};
