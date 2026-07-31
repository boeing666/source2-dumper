#pragma once

class CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    GameTime_t m_NextAttack; // offset 0x1A78, size 0x4, align 255
    int32 soldier_offset; // offset 0x1A7C, size 0x4, align 4
    int32 soldier_count; // offset 0x1A80, size 0x4, align 4
    int32 forward_angle; // offset 0x1A84, size 0x4, align 4
    int32 knockback_distance; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CUtlVector< CHandle< C_BaseEntity > > m_hAllSoldiers; // offset 0x1A90, size 0x18, align 8
    GameTime_t m_flLastStationaryTime; // offset 0x1AA8, size 0x4, align 255
    VectorWS m_vLastStationaryPosition; // offset 0x1AAC, size 0xC, align 4
    float32 stationary_attack_delay; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
