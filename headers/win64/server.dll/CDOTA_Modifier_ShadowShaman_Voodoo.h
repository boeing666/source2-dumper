#pragma once

class CDOTA_Modifier_ShadowShaman_Voodoo : public CDOTA_Modifier_Hexed /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 movespeed; // offset 0x1AF8, size 0x4, align 4
    int32 damage_amp; // offset 0x1AFC, size 0x4, align 4
    int32 ally_chicken_movement_speed_bonus_pct; // offset 0x1B00, size 0x4, align 4
    int32 m_bIsAlly; // offset 0x1B04, size 0x4, align 4
};
