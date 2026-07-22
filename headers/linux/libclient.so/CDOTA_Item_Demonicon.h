#pragma once

class CDOTA_Item_Demonicon : public C_DOTA_Item /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hDemonSummons; // offset 0x8D0, size 0x18, align 8
};
