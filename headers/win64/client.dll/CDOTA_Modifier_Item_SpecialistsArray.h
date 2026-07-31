#pragma once

class CDOTA_Modifier_Item_SpecialistsArray : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 agility; // offset 0x1A78, size 0x4, align 4
    int32 damage; // offset 0x1A7C, size 0x4, align 4
    int32 proc_chance; // offset 0x1A80, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1A84, size 0x4, align 4
    int32 count; // offset 0x1A88, size 0x4, align 4
    int32 secondary_target_range_bonus; // offset 0x1A8C, size 0x4, align 4
    int32 secondary_target_angle; // offset 0x1A90, size 0x4, align 4
    int32 base_proc_dmg; // offset 0x1A94, size 0x4, align 4
    bool m_bTriggered; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x77]; // offset 0x1A99
};
