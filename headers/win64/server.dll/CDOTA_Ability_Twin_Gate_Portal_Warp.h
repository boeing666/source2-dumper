#pragma once

class CDOTA_Ability_Twin_Gate_Portal_Warp : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x28]; // offset 0x584
    float32 m_flManaCostProportion; // offset 0x5AC, size 0x4, align 4
};
