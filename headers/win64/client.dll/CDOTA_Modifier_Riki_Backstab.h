#pragma once

class CDOTA_Modifier_Riki_Backstab : public CDOTA_Modifier_PersistentInvisibility /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    int32 cleave; // offset 0x1A68, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1A6C, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A70, size 0x4, align 4
    int32 creep_bonus_damage; // offset 0x1A74, size 0x4, align 4
    float32 bonus_xp_kill; // offset 0x1A78, size 0x4, align 4
    float32 bonus_xp_assist; // offset 0x1A7C, size 0x4, align 4
};
