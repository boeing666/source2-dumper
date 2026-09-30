#pragma once

class CCitadel_Ability_PunkGoat_Ult : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2000, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1704]; // offset 0x0
    uint8 m_nSlamTravelType; // offset 0x1704, size 0x1, align 1
    char _pad_1705[0x3]; // offset 0x1705
    float32 m_flDistanceToTravel; // offset 0x1708, size 0x4, align 4
    bool m_bHoldingAbilityButton; // offset 0x170C, size 0x1, align 1
    char _pad_170D[0x8F3]; // offset 0x170D
};
