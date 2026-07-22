#pragma once

class CDOTA_Modifier_Visage_Silent_As_The_Grave : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A64]; // offset 0x0
    int32 invis; // offset 0x1A64, size 0x4, align 4
    int32 movespeed_bonus; // offset 0x1A68, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A6C, size 0x4, align 4
    float32 bonus_duration; // offset 0x1A70, size 0x4, align 4
    bool m_bHasMadeAttack; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
};
