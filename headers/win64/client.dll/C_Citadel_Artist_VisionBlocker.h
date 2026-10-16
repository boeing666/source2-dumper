#pragma once

class C_Citadel_Artist_VisionBlocker : public CBaseAnimGraph /*0x0*/  // sizeof 0xE08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    float32 s_flBuildUpTime; // offset 0xDF8, size 0x4, align 4
    float32 s_flTearDownTime; // offset 0xDFC, size 0x4, align 4
    GameTime_t m_flTurnSolidTime; // offset 0xE00, size 0x4, align 255
    GameTime_t m_flTearDownStartTime; // offset 0xE04, size 0x4, align 255
};
