#pragma once

class CDOTA_Ability_Warlock_RainOfChaos : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 aoe; // offset 0x580, size 0x4, align 4
    bool m_bHasScepter; // offset 0x584, size 0x1, align 1
    char _pad_0585[0x3]; // offset 0x585
};
