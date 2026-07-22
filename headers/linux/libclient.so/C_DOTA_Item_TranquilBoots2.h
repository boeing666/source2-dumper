#pragma once

class C_DOTA_Item_TranquilBoots2 : public C_DOTA_Item /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    int32 break_count; // offset 0x8CC, size 0x4, align 4
    CUtlVector< GameTime_t > m_DamageList; // offset 0x8D0, size 0x18, align 8
};
