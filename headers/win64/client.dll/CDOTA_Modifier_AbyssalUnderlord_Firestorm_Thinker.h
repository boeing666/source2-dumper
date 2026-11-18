#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 wave_damage; // offset 0x1AF8, size 0x4, align 4
    int32 wave_count; // offset 0x1AFC, size 0x4, align 4
    float32 radius; // offset 0x1B00, size 0x4, align 4
    float32 wave_interval; // offset 0x1B04, size 0x4, align 4
    float32 burn_duration; // offset 0x1B08, size 0x4, align 4
    float32 burn_interval; // offset 0x1B0C, size 0x4, align 4
    float32 first_wave_delay; // offset 0x1B10, size 0x4, align 4
    float32 building_damage; // offset 0x1B14, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
