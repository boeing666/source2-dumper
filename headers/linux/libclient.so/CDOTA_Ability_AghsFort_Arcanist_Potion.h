#pragma once

class CDOTA_Ability_AghsFort_Arcanist_Potion : public C_DOTA_Item /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8DC]; // offset 0x0
    int32 cooldown_reduction_pct; // offset 0x8DC, size 0x4, align 4
    int32 manacost_reduction_pct; // offset 0x8E0, size 0x4, align 4
    char _pad_08E4[0x4]; // offset 0x8E4
};
