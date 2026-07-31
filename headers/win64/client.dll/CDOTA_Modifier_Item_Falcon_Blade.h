#pragma once

class CDOTA_Modifier_Item_Falcon_Blade : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 bonus_damage_per_kill; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_damage_per_assist; // offset 0x1A80, size 0x4, align 4
    int32 bonus_health; // offset 0x1A84, size 0x4, align 4
    int32 max_damage; // offset 0x1A88, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A8C, size 0x4, align 4
    int32 stack_limit; // offset 0x1A90, size 0x4, align 4
    float32 stack_duration; // offset 0x1A94, size 0x4, align 4
    GameTime_t m_flStackDieTime; // offset 0x1A98, size 0x4, align 255
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
