#pragma once

class CDOTA_Modifier_Riki_Backstab : public CDOTA_Modifier_PersistentInvisibility /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 cleave; // offset 0x1B08, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1B0C, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B10, size 0x4, align 4
    int32 creep_bonus_damage; // offset 0x1B14, size 0x4, align 4
    float32 bonus_xp_kill; // offset 0x1B18, size 0x4, align 4
    float32 bonus_xp_assist; // offset 0x1B1C, size 0x4, align 4
};
