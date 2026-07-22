#pragma once

class CDOTA_Modifier_Silencer_LastWord : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 duration; // offset 0x1A58, size 0x4, align 4
    bool spellcast; // offset 0x1A5C, size 0x1, align 1
    char _pad_1A5D[0x3]; // offset 0x1A5D
    int32 damage; // offset 0x1A60, size 0x4, align 4
    float32 debuff_duration; // offset 0x1A64, size 0x4, align 4
    float32 int_multiplier; // offset 0x1A68, size 0x4, align 4
    float32 radius; // offset 0x1A6C, size 0x4, align 4
};
