#pragma once

class CDOTA_Modifier_Sven_GreatCleave : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 cleave_starting_width; // offset 0x1AA8, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1AAC, size 0x4, align 4
    float32 cleave_distance; // offset 0x1AB0, size 0x4, align 4
    float32 great_cleave_damage; // offset 0x1AB4, size 0x4, align 4
    int32 strength_bonus; // offset 0x1AB8, size 0x4, align 4
    AttackRecord_t m_nLastCleaveRecord; // offset 0x1ABC, size 0x2, align 255
    char _pad_1ABE[0x2]; // offset 0x1ABE
    int32 m_nLastCleaveKills; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
