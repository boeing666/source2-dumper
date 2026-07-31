#pragma once

class CDOTA_Modifier_GlimmerCape_Fade : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 active_movement_speed; // offset 0x1A78, size 0x4, align 4
    int32 barrier_block; // offset 0x1A7C, size 0x4, align 4
    int32 barrier_amount; // offset 0x1A80, size 0x4, align 4
    float32 initial_fade_delay; // offset 0x1A84, size 0x4, align 4
    float32 secondary_fade_delay; // offset 0x1A88, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x1A8C, size 0x4, align 4
    float32 m_flCurentFadeDelay; // offset 0x1A90, size 0x4, align 4
    GameTime_t m_flLastActionTime; // offset 0x1A94, size 0x4, align 255
};
