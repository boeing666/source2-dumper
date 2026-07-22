#pragma once

class CDOTA_Ability_Tusk_Drinking_Buddies : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 buff_duration; // offset 0x824, size 0x4, align 4
    float32 pull_duration; // offset 0x828, size 0x4, align 4
    float32 min_distance; // offset 0x82C, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x830, size 0x1, align 1
    char _pad_0831[0x7]; // offset 0x831
};
