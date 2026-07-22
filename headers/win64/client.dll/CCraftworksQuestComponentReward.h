#pragma once

class CCraftworksQuestComponentReward  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    CraftworksComponentID_t m_unComponentID; // offset 0x0, size 0x1, align 255
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flStatMultiplier; // offset 0x4, size 0x4, align 4
};
