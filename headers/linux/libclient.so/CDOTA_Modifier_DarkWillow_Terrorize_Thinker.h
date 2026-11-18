#pragma once

class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hWisp; // offset 0x1AF8, size 0x4, align 4
    float32 destination_travel_speed; // offset 0x1AFC, size 0x4, align 4
    float32 return_travel_speed; // offset 0x1B00, size 0x4, align 4
    float32 destination_radius; // offset 0x1B04, size 0x4, align 4
    float32 impact_damage; // offset 0x1B08, size 0x4, align 4
    float32 destination_status_duration; // offset 0x1B0C, size 0x4, align 4
    float32 initial_delay; // offset 0x1B10, size 0x4, align 4
    float32 starting_height; // offset 0x1B14, size 0x4, align 4
    VectorWS m_vAttackLocation; // offset 0x1B18, size 0xC, align 4
    bool m_bAttacking; // offset 0x1B24, size 0x1, align 1
    bool m_bReturning; // offset 0x1B25, size 0x1, align 1
    char _pad_1B26[0x2]; // offset 0x1B26
    float32 m_fCurHeight; // offset 0x1B28, size 0x4, align 4
    float32 m_fEstimatedTravelTime; // offset 0x1B2C, size 0x4, align 4
    float32 think_interval; // offset 0x1B30, size 0x4, align 4
    bool m_bInFlight; // offset 0x1B34, size 0x1, align 1
    char _pad_1B35[0x3]; // offset 0x1B35
};
