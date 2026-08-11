#pragma once

class CDOTA_Modifier_Riki_Backstab : public CDOTA_Modifier_PersistentInvisibility /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A84]; // offset 0x0
    int32 cleave; // offset 0x1A84, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1A88, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A8C, size 0x4, align 4
    int32 creep_bonus_damage; // offset 0x1A90, size 0x4, align 4
    float32 bonus_xp_kill; // offset 0x1A94, size 0x4, align 4
    float32 bonus_xp_assist; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
