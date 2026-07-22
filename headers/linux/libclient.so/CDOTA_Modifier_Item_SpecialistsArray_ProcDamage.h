#pragma once

class CDOTA_Modifier_Item_SpecialistsArray_ProcDamage : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 base_proc_dmg; // offset 0x1A58, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1A5C, size 0x4, align 4
};
