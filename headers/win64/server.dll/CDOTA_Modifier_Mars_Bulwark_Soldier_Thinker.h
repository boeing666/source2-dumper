#pragma once

class CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t m_NextAttack; // offset 0x1AA8, size 0x4, align 255
    int32 soldier_offset; // offset 0x1AAC, size 0x4, align 4
    int32 soldier_count; // offset 0x1AB0, size 0x4, align 4
    int32 forward_angle; // offset 0x1AB4, size 0x4, align 4
    int32 knockback_distance; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
    CUtlVector< CHandle< CBaseEntity > > m_hAllSoldiers; // offset 0x1AC0, size 0x18, align 8
    GameTime_t m_flLastStationaryTime; // offset 0x1AD8, size 0x4, align 255
    VectorWS m_vLastStationaryPosition; // offset 0x1ADC, size 0xC, align 4
    float32 stationary_attack_delay; // offset 0x1AE8, size 0x4, align 4
    char _pad_1AEC[0x4]; // offset 0x1AEC
};
