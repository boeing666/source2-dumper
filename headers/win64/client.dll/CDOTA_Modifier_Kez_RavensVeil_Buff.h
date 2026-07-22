#pragma once

class CDOTA_Modifier_Kez_RavensVeil_Buff : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    float32 fade_time; // offset 0x1A68, size 0x4, align 4
    float32 buff_duration; // offset 0x1A6C, size 0x4, align 4
    int32 bonus_ms; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
