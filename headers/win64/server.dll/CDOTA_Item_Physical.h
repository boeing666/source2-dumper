#pragma once

class CDOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    int32 m_nFlags; // offset 0x878, size 0x4, align 4
    int32 m_nRevealedInFoWForTeam; // offset 0x87C, size 0x4, align 4
    GameTime_t m_fCreationTime; // offset 0x880, size 0x4, align 255
    CHandle< CDOTA_Item > m_hItem; // offset 0x884, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x7]; // offset 0x889
};
