#pragma once

class CDOTA_Modifier_ShadowShaman_Voodoo : public CDOTA_Modifier_Hexed /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 movespeed; // offset 0x1AA8, size 0x4, align 4
    int32 damage_amp; // offset 0x1AAC, size 0x4, align 4
    int32 ally_chicken_movement_speed_bonus_pct; // offset 0x1AB0, size 0x4, align 4
    int32 m_bIsAlly; // offset 0x1AB4, size 0x4, align 4
};
