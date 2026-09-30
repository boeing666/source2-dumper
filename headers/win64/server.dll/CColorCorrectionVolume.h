#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    float32 m_MaxWeight; // offset 0x9F0, size 0x4, align 4
    float32 m_FadeDuration; // offset 0x9F4, size 0x4, align 4
    float32 m_Weight; // offset 0x9F8, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0x9FC, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xBFC, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xC00, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xC04, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xC08, size 0x4, align 255
    char _pad_0C0C[0x4]; // offset 0xC0C
};
