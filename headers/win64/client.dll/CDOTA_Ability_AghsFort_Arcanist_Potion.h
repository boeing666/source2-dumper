#pragma once

class CDOTA_Ability_AghsFort_Arcanist_Potion : public C_DOTA_Item /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    int32 cooldown_reduction_pct; // offset 0x760, size 0x4, align 4
    int32 manacost_reduction_pct; // offset 0x764, size 0x4, align 4
};
