#pragma once

class CDOTA_Modifier_Item_HydrasBreath_ProcDamage : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 base_proc_dmg; // offset 0x1AF8, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1AFC, size 0x4, align 4
};
