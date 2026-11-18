#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    float32 m_MaxWeight; // offset 0xA30, size 0x4, align 4
    float32 m_FadeDuration; // offset 0xA34, size 0x4, align 4
    float32 m_Weight; // offset 0xA38, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0xA3C, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xC3C, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xC40, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xC44, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xC48, size 0x4, align 255
    char _pad_0C4C[0x4]; // offset 0xC4C
};
