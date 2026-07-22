#pragma once

class CDOTA_Ability_Morty_Hop : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 max_distance; // offset 0x85C, size 0x4, align 4
    VectorWS m_vTarget; // offset 0x860, size 0xC, align 4
    int32 m_iTrackerProjectile; // offset 0x86C, size 0x4, align 4
};
