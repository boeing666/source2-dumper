#pragma once

class CCraftworksRecipeComponentQuantity  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    CraftworksComponentID_t m_unComponentID; // offset 0x0, size 0x1, align 255
    char _pad_0001[0x3]; // offset 0x1
    uint32 m_unQuantity; // offset 0x4, size 0x4, align 4
};
