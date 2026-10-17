#pragma once

class CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CountdownTimer m_CooldownTimer; // offset 0x1AA8, size 0x18, align 8
    int32 maim_chance; // offset 0x1AC0, size 0x4, align 4
    float32 maim_duration; // offset 0x1AC4, size 0x4, align 4
};
