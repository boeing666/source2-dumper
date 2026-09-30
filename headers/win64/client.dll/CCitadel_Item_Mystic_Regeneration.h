#pragma once

class CCitadel_Item_Mystic_Regeneration : public CCitadel_Item /*0x0*/  // sizeof 0x1840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    int32 m_iRegenStacks; // offset 0x16D8, size 0x4, align 4
    float32 m_flPendingIncomingHeal; // offset 0x16DC, size 0x4, align 4
    char _pad_16E0[0x160]; // offset 0x16E0
};
