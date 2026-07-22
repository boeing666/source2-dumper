#pragma once

class CLogicActiveAutosave : public CLogicAutosave /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x784]; // offset 0x0
    int32 m_TriggerHitPoints; // offset 0x784, size 0x4, align 4
    float32 m_flTimeToTrigger; // offset 0x788, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x78C, size 0x4, align 255
    float32 m_flDangerousTime; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
};
