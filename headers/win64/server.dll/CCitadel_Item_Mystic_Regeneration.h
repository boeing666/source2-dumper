#pragma once

class CCitadel_Item_Mystic_Regeneration : public CCitadel_Item /*0x0*/  // sizeof 0x1640, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14D4]; // offset 0x0
    bool m_bForceModUpdate; // offset 0x14D4, size 0x1, align 1
    char _pad_14D5[0x3]; // offset 0x14D5
    int32 m_iRegenStacks; // offset 0x14D8, size 0x4, align 4
    float32 m_flPendingIncomingHeal; // offset 0x14DC, size 0x4, align 4
    char _pad_14E0[0x160]; // offset 0x14E0
};
