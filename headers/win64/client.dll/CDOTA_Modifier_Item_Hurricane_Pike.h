#pragma once

class CDOTA_Modifier_Item_Hurricane_Pike : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_health; // offset 0x1A78, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_agility; // offset 0x1A80, size 0x4, align 4
    int32 bonus_strength; // offset 0x1A84, size 0x4, align 4
    int32 base_attack_range; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
