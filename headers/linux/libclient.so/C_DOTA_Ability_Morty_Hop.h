#pragma once

class C_DOTA_Ability_Morty_Hop : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 max_distance; // offset 0x828, size 0x4, align 4
    VectorWS m_vTarget; // offset 0x82C, size 0xC, align 4
    int32 m_iTrackerProjectile; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x24]; // offset 0x83C
};
