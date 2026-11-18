#pragma once

class C_DOTA_Ability_Pugna_LifeDrain : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    bool m_bIgnoreActiveDrains; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    GameTime_t m_flChannelEndTime; // offset 0x82C, size 0x4, align 255
};
