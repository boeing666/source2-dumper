#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xF28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD0C]; // offset 0x0
    float32 m_MaxWeight; // offset 0xD0C, size 0x4, align 4
    float32 m_FadeDuration; // offset 0xD10, size 0x4, align 4
    float32 m_Weight; // offset 0xD14, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0xD18, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xF18, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xF1C, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xF20, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xF24, size 0x4, align 255
};
