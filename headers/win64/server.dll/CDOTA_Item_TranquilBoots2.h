#pragma once

class CDOTA_Item_TranquilBoots2 : public CDOTA_Item /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    int32 break_count; // offset 0x660, size 0x4, align 4
    char _pad_0664[0x4]; // offset 0x664
    CUtlVector< GameTime_t > m_DamageList; // offset 0x668, size 0x18, align 8
};
