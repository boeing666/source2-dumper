#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    float32 m_MaxWeight; // offset 0x9D0, size 0x4, align 4
    float32 m_FadeDuration; // offset 0x9D4, size 0x4, align 4
    float32 m_Weight; // offset 0x9D8, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0x9DC, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xBDC, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xBE0, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xBE4, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xBE8, size 0x4, align 255
    char _pad_0BEC[0x4]; // offset 0xBEC
};
