#pragma once

class CDOTA_Modifier_Item_Falcon_Blade : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_damage; // offset 0x1A58, size 0x4, align 4
    int32 bonus_damage_per_kill; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_damage_per_assist; // offset 0x1A60, size 0x4, align 4
    int32 bonus_health; // offset 0x1A64, size 0x4, align 4
    int32 max_damage; // offset 0x1A68, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A6C, size 0x4, align 4
    int32 stack_limit; // offset 0x1A70, size 0x4, align 4
    float32 stack_duration; // offset 0x1A74, size 0x4, align 4
    GameTime_t m_flStackDieTime; // offset 0x1A78, size 0x4, align 255
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
