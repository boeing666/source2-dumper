#pragma once

class CDOTA_Modifier_Falconers_Glove : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flRotation; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vRotationOrigin; // offset 0x1AAC, size 0xC, align 4
    float32 orbit_radius; // offset 0x1AB8, size 0x4, align 4
    float32 orbit_seconds_per_rotation; // offset 0x1ABC, size 0x4, align 4
    float32 min_move_speed; // offset 0x1AC0, size 0x4, align 4
    float32 max_move_speed; // offset 0x1AC4, size 0x4, align 4
};
