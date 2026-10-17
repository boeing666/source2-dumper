#pragma once

class CDOTA_Modifier_Slark_Depth_Shroud : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AB4]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
    int32 bonus_movement_speed; // offset 0x1AB8, size 0x4, align 4
    float32 bonus_regen; // offset 0x1ABC, size 0x4, align 4
    int32 attack_speed; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
