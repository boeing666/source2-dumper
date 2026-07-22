#pragma once

class CMarkupVolumeTagged : public CMarkupVolume /*0x0*/  // sizeof 0xA90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_GroupNames; // offset 0xA58, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_Tags; // offset 0xA70, size 0x18, align 8
    bool m_bIsGroup; // offset 0xA88, size 0x1, align 1 | MNotSaved
    bool m_bGroupByPrefab; // offset 0xA89, size 0x1, align 1
    bool m_bGroupByVolume; // offset 0xA8A, size 0x1, align 1
    bool m_bGroupOtherGroups; // offset 0xA8B, size 0x1, align 1
    bool m_bIsInGroup; // offset 0xA8C, size 0x1, align 1 | MNotSaved
    char _pad_0A8D[0x3]; // offset 0xA8D
};
