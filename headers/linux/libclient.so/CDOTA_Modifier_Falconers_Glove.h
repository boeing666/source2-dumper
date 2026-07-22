#pragma once

class CDOTA_Modifier_Falconers_Glove : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 m_flRotation; // offset 0x1A58, size 0x4, align 4
    VectorWS m_vRotationOrigin; // offset 0x1A5C, size 0xC, align 4
    float32 orbit_radius; // offset 0x1A68, size 0x4, align 4
    float32 orbit_seconds_per_rotation; // offset 0x1A6C, size 0x4, align 4
    float32 min_move_speed; // offset 0x1A70, size 0x4, align 4
    float32 max_move_speed; // offset 0x1A74, size 0x4, align 4
};
