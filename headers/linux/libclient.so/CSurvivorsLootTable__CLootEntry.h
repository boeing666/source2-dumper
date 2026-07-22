#pragma once

class CSurvivorsLootTable::CLootEntry  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    SurvivorsPickupID_t m_unPickupID; // offset 0x0, size 0x4, align 255
    int32 m_nMinAmount; // offset 0x4, size 0x4, align 4
    int32 m_nMaxAmount; // offset 0x8, size 0x4, align 4
};
