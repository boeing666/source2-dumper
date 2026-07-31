#pragma once

class CDOTA_Modifier_BotBoost : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 gold_bonus_percent; // offset 0x1A78, size 0x4, align 4
    int32 xp_bonus_percent; // offset 0x1A7C, size 0x4, align 4
};
