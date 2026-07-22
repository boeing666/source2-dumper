#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 wave_damage; // offset 0x1A58, size 0x4, align 4
    int32 wave_count; // offset 0x1A5C, size 0x4, align 4
    float32 radius; // offset 0x1A60, size 0x4, align 4
    float32 wave_interval; // offset 0x1A64, size 0x4, align 4
    float32 burn_duration; // offset 0x1A68, size 0x4, align 4
    float32 burn_interval; // offset 0x1A6C, size 0x4, align 4
    float32 first_wave_delay; // offset 0x1A70, size 0x4, align 4
    float32 building_damage; // offset 0x1A74, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
