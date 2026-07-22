#pragma once

class CLogicActiveAutosave : public CLogicAutosave /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x794]; // offset 0x0
    int32 m_TriggerHitPoints; // offset 0x794, size 0x4, align 4
    float32 m_flTimeToTrigger; // offset 0x798, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x79C, size 0x4, align 255
    float32 m_flDangerousTime; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
