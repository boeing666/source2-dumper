#pragma once

class CDOTA_Modifier_Item_SpecialistsArray : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 agility; // offset 0x1AA8, size 0x4, align 4
    int32 damage; // offset 0x1AAC, size 0x4, align 4
    int32 proc_chance; // offset 0x1AB0, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1AB4, size 0x4, align 4
    int32 count; // offset 0x1AB8, size 0x4, align 4
    int32 secondary_target_range_bonus; // offset 0x1ABC, size 0x4, align 4
    int32 secondary_target_angle; // offset 0x1AC0, size 0x4, align 4
    int32 base_proc_dmg; // offset 0x1AC4, size 0x4, align 4
    bool m_bTriggered; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x77]; // offset 0x1AC9
};
