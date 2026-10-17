#pragma once

class CDOTA_Item_TranquilBoots2 : public CDOTA_Item /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    int32 break_count; // offset 0x934, size 0x4, align 4
    CUtlVector< GameTime_t > m_DamageList; // offset 0x938, size 0x18, align 8
};
