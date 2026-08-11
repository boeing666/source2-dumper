#pragma once

class CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 moveslow_drain_rate; // offset 0x1A78, size 0x4, align 4
    float32 max_moveslow; // offset 0x1A7C, size 0x4, align 4
    float32 max_moveslow_time; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
