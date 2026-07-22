#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xB10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    float32 m_MaxWeight; // offset 0x8F0, size 0x4, align 4
    float32 m_FadeDuration; // offset 0x8F4, size 0x4, align 4
    float32 m_Weight; // offset 0x8F8, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0x8FC, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xAFC, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xB00, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xB04, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xB08, size 0x4, align 255
    char _pad_0B0C[0x4]; // offset 0xB0C
};
