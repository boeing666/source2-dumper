#pragma once

class C_DOTA_Ability_Morty_Hop : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 max_distance; // offset 0x6A8, size 0x4, align 4
    VectorWS m_vTarget; // offset 0x6AC, size 0xC, align 4
    int32 m_iTrackerProjectile; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x24]; // offset 0x6BC
};
