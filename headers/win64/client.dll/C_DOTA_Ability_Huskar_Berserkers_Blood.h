#pragma once

class C_DOTA_Ability_Huskar_Berserkers_Blood : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    bool activatable; // offset 0x6A8, size 0x1, align 1
    char _pad_06A9[0x3]; // offset 0x6A9
    int32 m_nHealthCost; // offset 0x6AC, size 0x4, align 4
    int32 m_nDebuffCount; // offset 0x6B0, size 0x4, align 4
    char _pad_06B4[0x4]; // offset 0x6B4
};
