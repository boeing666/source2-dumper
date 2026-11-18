#pragma once

class CDOTA_Ability_Pugna_LifeDrain : public CDOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    bool m_bIgnoreActiveDrains; // offset 0x85B, size 0x1, align 1
    GameTime_t m_flChannelEndTime; // offset 0x85C, size 0x4, align 255
};
