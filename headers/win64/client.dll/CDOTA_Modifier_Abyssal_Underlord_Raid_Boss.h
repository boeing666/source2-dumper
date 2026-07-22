#pragma once

class CDOTA_Modifier_Abyssal_Underlord_Raid_Boss : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 damage_reduction; // offset 0x1A58, size 0x4, align 4
    float32 bonus_ms; // offset 0x1A5C, size 0x4, align 4
    float32 buff_duration; // offset 0x1A60, size 0x4, align 4
    float32 dark_portal_multiplier; // offset 0x1A64, size 0x4, align 4
};
