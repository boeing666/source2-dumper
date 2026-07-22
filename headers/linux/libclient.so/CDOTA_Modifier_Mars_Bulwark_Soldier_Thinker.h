#pragma once

class CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    GameTime_t m_NextAttack; // offset 0x1A58, size 0x4, align 255
    int32 soldier_offset; // offset 0x1A5C, size 0x4, align 4
    int32 soldier_count; // offset 0x1A60, size 0x4, align 4
    int32 forward_angle; // offset 0x1A64, size 0x4, align 4
    int32 knockback_distance; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
    CUtlVector< CHandle< C_BaseEntity > > m_hAllSoldiers; // offset 0x1A70, size 0x18, align 8
    GameTime_t m_flLastStationaryTime; // offset 0x1A88, size 0x4, align 255
    VectorWS m_vLastStationaryPosition; // offset 0x1A8C, size 0xC, align 4
    float32 stationary_attack_delay; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
