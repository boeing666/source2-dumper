#pragma once

class CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 wave_damage; // offset 0x1AA8, size 0x4, align 4
    int32 wave_count; // offset 0x1AAC, size 0x4, align 4
    int32 radius; // offset 0x1AB0, size 0x4, align 4
    int32 summon_count; // offset 0x1AB4, size 0x4, align 4
    float32 wave_interval; // offset 0x1AB8, size 0x4, align 4
    float32 burn_duration; // offset 0x1ABC, size 0x4, align 4
    float32 first_wave_delay; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
