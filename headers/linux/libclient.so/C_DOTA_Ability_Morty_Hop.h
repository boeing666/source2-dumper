#pragma once

class C_DOTA_Ability_Morty_Hop : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 max_distance; // offset 0x824, size 0x4, align 4
    VectorWS m_vTarget; // offset 0x828, size 0xC, align 4
    int32 m_iTrackerProjectile; // offset 0x834, size 0x4, align 4
    char _pad_0838[0x20]; // offset 0x838
};
