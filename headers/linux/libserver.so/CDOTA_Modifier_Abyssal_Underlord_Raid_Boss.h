#pragma once

class CDOTA_Modifier_Abyssal_Underlord_Raid_Boss : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_reduction; // offset 0x1AA8, size 0x4, align 4
    float32 bonus_ms; // offset 0x1AAC, size 0x4, align 4
    float32 buff_duration; // offset 0x1AB0, size 0x4, align 4
    float32 dark_portal_multiplier; // offset 0x1AB4, size 0x4, align 4
};
