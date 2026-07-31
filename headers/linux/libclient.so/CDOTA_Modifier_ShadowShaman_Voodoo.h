#pragma once

class CDOTA_Modifier_ShadowShaman_Voodoo : public CDOTA_Modifier_Hexed /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 movespeed; // offset 0x1A78, size 0x4, align 4
    int32 damage_amp; // offset 0x1A7C, size 0x4, align 4
    int32 ally_chicken_movement_speed_bonus_pct; // offset 0x1A80, size 0x4, align 4
    int32 m_bIsAlly; // offset 0x1A84, size 0x4, align 4
};
