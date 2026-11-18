#pragma once

class CDOTA_Modifier_Pudge_Meat_Hook : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 distance_to_damage; // offset 0x1AF8, size 0x4, align 4
    float32 min_distance_damage; // offset 0x1AFC, size 0x4, align 4
    Vector2D m_vLastPosition; // offset 0x1B00, size 0x8, align 4
    float32 m_flAccumulatedDistance; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
