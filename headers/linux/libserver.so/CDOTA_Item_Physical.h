#pragma once

class CDOTA_Item_Physical : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    int32 m_nFlags; // offset 0xB50, size 0x4, align 4
    int32 m_nRevealedInFoWForTeam; // offset 0xB54, size 0x4, align 4
    GameTime_t m_fCreationTime; // offset 0xB58, size 0x4, align 255
    CHandle< CDOTA_Item > m_hItem; // offset 0xB5C, size 0x4, align 4
    bool m_bIsLowPriorityHoverItem; // offset 0xB60, size 0x1, align 1
    char _pad_0B61[0x7]; // offset 0xB61
};
