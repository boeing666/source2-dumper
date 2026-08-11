#pragma once

class CDOTA_Ability_Tusk_Drinking_Buddies : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 buff_duration; // offset 0x580, size 0x4, align 4
    float32 pull_duration; // offset 0x584, size 0x4, align 4
    float32 min_distance; // offset 0x588, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x58C, size 0x1, align 1
    char _pad_058D[0x3]; // offset 0x58D
};
