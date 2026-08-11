#pragma once

class CDOTA_Modifier_Sven_GreatCleave : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 cleave_starting_width; // offset 0x1A78, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1A7C, size 0x4, align 4
    float32 cleave_distance; // offset 0x1A80, size 0x4, align 4
    float32 great_cleave_damage; // offset 0x1A84, size 0x4, align 4
    int32 strength_bonus; // offset 0x1A88, size 0x4, align 4
    AttackRecord_t m_nLastCleaveRecord; // offset 0x1A8C, size 0x2, align 255
    char _pad_1A8E[0x2]; // offset 0x1A8E
    int32 m_nLastCleaveKills; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
