#pragma once

class CDOTA_Item_Demonicon : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x930]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hDemonSummons; // offset 0x930, size 0x18, align 8
};
