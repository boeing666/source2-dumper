#pragma once

class CDOTA_Modifier_NightStalker_CripplingFear : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1ABC]; // offset 0x0
    int32 dps; // offset 0x1ABC, size 0x4, align 4
    float32 tick_rate; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
