#pragma once

class CDOTA_Modifier_Item_Falcon_Blade : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_damage_per_kill; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_damage_per_assist; // offset 0x1B00, size 0x4, align 4
    int32 bonus_health; // offset 0x1B04, size 0x4, align 4
    int32 max_damage; // offset 0x1B08, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B0C, size 0x4, align 4
    int32 stack_limit; // offset 0x1B10, size 0x4, align 4
    float32 stack_duration; // offset 0x1B14, size 0x4, align 4
    GameTime_t m_flStackDieTime; // offset 0x1B18, size 0x4, align 255
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
