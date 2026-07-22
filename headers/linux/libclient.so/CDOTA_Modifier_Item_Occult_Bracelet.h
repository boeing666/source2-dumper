#pragma once

class CDOTA_Modifier_Item_Occult_Bracelet : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_all_stats; // offset 0x1A58, size 0x4, align 4
    int32 stack_limit; // offset 0x1A5C, size 0x4, align 4
    float32 stack_duration; // offset 0x1A60, size 0x4, align 4
    GameTime_t m_flStackDieTime; // offset 0x1A64, size 0x4, align 255
    int32 magic_resistance; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
