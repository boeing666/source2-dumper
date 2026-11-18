#pragma once

class CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CountdownTimer m_CooldownTimer; // offset 0x1AF8, size 0x18, align 8
    int32 maim_chance; // offset 0x1B10, size 0x4, align 4
    float32 maim_duration; // offset 0x1B14, size 0x4, align 4
};
