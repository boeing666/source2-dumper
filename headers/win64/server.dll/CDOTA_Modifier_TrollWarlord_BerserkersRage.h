#pragma once

class CDOTA_Modifier_TrollWarlord_BerserkersRage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_move_speed; // offset 0x1A78, size 0x4, align 4
    int32 bonus_hp_pct; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A80, size 0x4, align 4
    int32 ensnare_chance; // offset 0x1A84, size 0x4, align 4
    float32 ensnare_duration; // offset 0x1A88, size 0x4, align 4
    int32 maim_chance; // offset 0x1A8C, size 0x4, align 4
    int32 maim_damage; // offset 0x1A90, size 0x4, align 4
    float32 maim_duration; // offset 0x1A94, size 0x4, align 4
};
