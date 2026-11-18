#pragma once

class CDOTA_Modifier_Nyx_Assassin_Burrow : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 damage_reduction; // offset 0x1B08, size 0x4, align 4
    int32 cooldown_reduction; // offset 0x1B0C, size 0x4, align 4
    int32 cast_range; // offset 0x1B10, size 0x4, align 4
    VectorWS m_vecInitialPos; // offset 0x1B14, size 0xC, align 4
};
