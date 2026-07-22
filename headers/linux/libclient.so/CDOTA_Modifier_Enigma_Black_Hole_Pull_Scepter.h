#pragma once

class CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 scepter_drag_speed; // offset 0x1A58, size 0x4, align 4
    float32 scepter_pull_rotate_speed; // offset 0x1A5C, size 0x4, align 4
    float32 aura_origin_x; // offset 0x1A60, size 0x4, align 4
    float32 aura_origin_y; // offset 0x1A64, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A68, size 0x4, align 255
    VectorWS m_vCenter; // offset 0x1A6C, size 0xC, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A78, size 0x4, align 255
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
