#pragma once

class CDOTA_Modifier_Riki_Backstab : public CDOTA_Modifier_PersistentInvisibility /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    int32 cleave; // offset 0x1AB8, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1ABC, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1AC0, size 0x4, align 4
    int32 creep_bonus_damage; // offset 0x1AC4, size 0x4, align 4
    float32 bonus_xp_kill; // offset 0x1AC8, size 0x4, align 4
    float32 bonus_xp_assist; // offset 0x1ACC, size 0x4, align 4
};
