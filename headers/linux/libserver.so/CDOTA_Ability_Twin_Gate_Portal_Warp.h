#pragma once

class CDOTA_Ability_Twin_Gate_Portal_Warp : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x85C, size 0x4, align 4
    char _pad_0860[0x28]; // offset 0x860
    float32 m_flManaCostProportion; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
};
