#pragma once

class CDOTA_Modifier_Bane_Nightmare : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nSource; // offset 0x1A78, size 0x4, align 4
    float32 animation_rate; // offset 0x1A7C, size 0x4, align 4
    Vector m_vWalkDir; // offset 0x1A80, size 0xC, align 4
    int32 walk_speed; // offset 0x1A8C, size 0x4, align 4
    float32 turn_rate; // offset 0x1A90, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A94, size 0x4, align 255
    float32 m_flWalkAngle; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
