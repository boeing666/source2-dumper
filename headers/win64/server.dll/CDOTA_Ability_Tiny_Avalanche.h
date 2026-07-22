#pragma once

class CDOTA_Ability_Tiny_Avalanche : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vTargetLoc; // offset 0x580, size 0xC, align 4
    char _pad_058C[0x14]; // offset 0x58C
};
