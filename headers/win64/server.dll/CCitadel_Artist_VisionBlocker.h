#pragma once

class CCitadel_Artist_VisionBlocker : public CBaseAnimGraph /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    float32 s_flBuildUpTime; // offset 0xAE0, size 0x4, align 4
    float32 s_flTearDownTime; // offset 0xAE4, size 0x4, align 4
    GameTime_t m_flTurnSolidTime; // offset 0xAE8, size 0x4, align 255
    GameTime_t m_flTearDownStartTime; // offset 0xAEC, size 0x4, align 255
};
