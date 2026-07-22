#pragma once

class C_DOTA_Item_TranquilBoots2 : public C_DOTA_Item /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    int32 break_count; // offset 0x758, size 0x4, align 4
    char _pad_075C[0x4]; // offset 0x75C
    CUtlVector< GameTime_t > m_DamageList; // offset 0x760, size 0x18, align 8
};
