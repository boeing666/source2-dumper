#pragma once

class CDOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    int32 m_nFlags; // offset 0xBB8, size 0x4, align 4
    int32 m_nRevealedInFoWForTeam; // offset 0xBBC, size 0x4, align 4
    GameTime_t m_fCreationTime; // offset 0xBC0, size 0x4, align 255
    CHandle< CDOTA_Item > m_hItem; // offset 0xBC4, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xBC8, size 0x1, align 1
    char _pad_0BC9[0x7]; // offset 0xBC9
};
