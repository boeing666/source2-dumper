#pragma once

class CDOTA_Modifier_Nyx_Assassin_Burrow : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    float32 health_regen_rate; // offset 0x1A68, size 0x4, align 4
    float32 mana_regen_rate; // offset 0x1A6C, size 0x4, align 4
    int32 damage_reduction; // offset 0x1A70, size 0x4, align 4
    int32 cooldown_reduction; // offset 0x1A74, size 0x4, align 4
    int32 cast_range; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vecInitialPos; // offset 0x1A7C, size 0xC, align 4
};
