#pragma once

struct TransitioningLayer_t  // sizeof 0x48, align 0xFF [vtable trivial_dtor] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    CNetworkedSequenceOperation m_op; // offset 0x8, size 0x28, align 8
    GameTime_t m_flStartAnimTime; // offset 0x30, size 0x4, align 255
    float32 m_flStartWeight; // offset 0x34, size 0x4, align 4
    GameTime_t m_flAnimTime; // offset 0x38, size 0x4, align 255
    int32 m_nOrder; // offset 0x3C, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0x40, size 0x4, align 4
    float32 m_flFadeOutDuration; // offset 0x44, size 0x4, align 4
};
