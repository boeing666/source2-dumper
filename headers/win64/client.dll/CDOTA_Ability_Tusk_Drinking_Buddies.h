#pragma once

class CDOTA_Ability_Tusk_Drinking_Buddies : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 buff_duration; // offset 0x6A8, size 0x4, align 4
    float32 pull_duration; // offset 0x6AC, size 0x4, align 4
    float32 min_distance; // offset 0x6B0, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x6B4, size 0x1, align 1
    char _pad_06B5[0x3]; // offset 0x6B5
};
