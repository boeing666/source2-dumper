#pragma once

class CDOTA_Modifier_Item_SpecialistsArray : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 agility; // offset 0x1A58, size 0x4, align 4
    int32 damage; // offset 0x1A5C, size 0x4, align 4
    int32 proc_chance; // offset 0x1A60, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1A64, size 0x4, align 4
    int32 count; // offset 0x1A68, size 0x4, align 4
    int32 secondary_target_range_bonus; // offset 0x1A6C, size 0x4, align 4
    int32 secondary_target_angle; // offset 0x1A70, size 0x4, align 4
    int32 base_proc_dmg; // offset 0x1A74, size 0x4, align 4
    bool m_bTriggered; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x77]; // offset 0x1A79
};
