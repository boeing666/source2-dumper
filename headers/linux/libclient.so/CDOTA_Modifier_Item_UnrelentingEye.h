#pragma once

class CDOTA_Modifier_Item_UnrelentingEye : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 max_slow_res; // offset 0x1A78, size 0x4, align 4
    float32 hero_reduction; // offset 0x1A7C, size 0x4, align 4
    float32 status_res_pct_increase_per_hero; // offset 0x1A80, size 0x4, align 4
    int32 m_nNearbyEnemyHeroes; // offset 0x1A84, size 0x4, align 4
};
