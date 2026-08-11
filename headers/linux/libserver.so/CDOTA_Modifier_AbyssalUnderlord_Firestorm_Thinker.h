#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 wave_damage; // offset 0x1A78, size 0x4, align 4
    int32 wave_count; // offset 0x1A7C, size 0x4, align 4
    float32 radius; // offset 0x1A80, size 0x4, align 4
    float32 wave_interval; // offset 0x1A84, size 0x4, align 4
    float32 burn_duration; // offset 0x1A88, size 0x4, align 4
    float32 burn_interval; // offset 0x1A8C, size 0x4, align 4
    float32 first_wave_delay; // offset 0x1A90, size 0x4, align 4
    float32 building_damage; // offset 0x1A94, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
