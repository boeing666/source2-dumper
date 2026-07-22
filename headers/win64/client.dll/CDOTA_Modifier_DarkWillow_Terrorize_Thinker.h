#pragma once

class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hWisp; // offset 0x1A58, size 0x4, align 4
    float32 destination_travel_speed; // offset 0x1A5C, size 0x4, align 4
    float32 return_travel_speed; // offset 0x1A60, size 0x4, align 4
    float32 destination_radius; // offset 0x1A64, size 0x4, align 4
    float32 impact_damage; // offset 0x1A68, size 0x4, align 4
    float32 destination_status_duration; // offset 0x1A6C, size 0x4, align 4
    float32 initial_delay; // offset 0x1A70, size 0x4, align 4
    float32 starting_height; // offset 0x1A74, size 0x4, align 4
    VectorWS m_vAttackLocation; // offset 0x1A78, size 0xC, align 4
    bool m_bAttacking; // offset 0x1A84, size 0x1, align 1
    bool m_bReturning; // offset 0x1A85, size 0x1, align 1
    char _pad_1A86[0x2]; // offset 0x1A86
    float32 m_fCurHeight; // offset 0x1A88, size 0x4, align 4
    float32 m_fEstimatedTravelTime; // offset 0x1A8C, size 0x4, align 4
    float32 think_interval; // offset 0x1A90, size 0x4, align 4
    bool m_bInFlight; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
};
