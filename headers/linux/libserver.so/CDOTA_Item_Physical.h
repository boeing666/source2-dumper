#pragma once

class CDOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    int32 m_nFlags; // offset 0xA70, size 0x4, align 4
    int32 m_nRevealedInFoWForTeam; // offset 0xA74, size 0x4, align 4
    GameTime_t m_fCreationTime; // offset 0xA78, size 0x4, align 255
    CHandle< CDOTA_Item > m_hItem; // offset 0xA7C, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xA80, size 0x1, align 1
    char _pad_0A81[0x7]; // offset 0xA81
};
