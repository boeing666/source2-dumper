#pragma once

class CDOTA_Modifier_Item_Disperser : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_agility; // offset 0x1A78, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A80, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A84, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A88, size 0x4, align 4
    float32 damage_per_burn; // offset 0x1A8C, size 0x4, align 4
    int32 feedback_mana_burn; // offset 0x1A90, size 0x4, align 4
    int32 feedback_mana_burn_illusion_melee; // offset 0x1A94, size 0x4, align 4
    int32 feedback_mana_burn_illusion_ranged; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
