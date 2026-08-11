#pragma once

class CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CountdownTimer m_CooldownTimer; // offset 0x1A78, size 0x18, align 8
    int32 maim_chance; // offset 0x1A90, size 0x4, align 4
    float32 maim_duration; // offset 0x1A94, size 0x4, align 4
};
