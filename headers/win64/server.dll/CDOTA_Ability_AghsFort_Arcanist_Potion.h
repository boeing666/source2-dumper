#pragma once

class CDOTA_Ability_AghsFort_Arcanist_Potion : public CDOTA_Item /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    int32 cooldown_reduction_pct; // offset 0x658, size 0x4, align 4
    int32 manacost_reduction_pct; // offset 0x65C, size 0x4, align 4
};
