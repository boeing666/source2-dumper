#pragma once

class CDOTA_Modifier_Magnifying_Monocle : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 bonus_attack_range; // offset 0x1A78, size 0x4, align 4
    float32 bonus_cast_range; // offset 0x1A7C, size 0x4, align 4
    float32 damage_threshold; // offset 0x1A80, size 0x4, align 4
    float32 damage_disable; // offset 0x1A84, size 0x4, align 4
};
