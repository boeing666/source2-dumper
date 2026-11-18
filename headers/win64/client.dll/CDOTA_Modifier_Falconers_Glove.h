#pragma once

class CDOTA_Modifier_Falconers_Glove : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flRotation; // offset 0x1AF8, size 0x4, align 4
    VectorWS m_vRotationOrigin; // offset 0x1AFC, size 0xC, align 4
    float32 orbit_radius; // offset 0x1B08, size 0x4, align 4
    float32 orbit_seconds_per_rotation; // offset 0x1B0C, size 0x4, align 4
    float32 min_move_speed; // offset 0x1B10, size 0x4, align 4
    float32 max_move_speed; // offset 0x1B14, size 0x4, align 4
};
