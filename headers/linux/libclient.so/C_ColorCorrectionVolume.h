#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1078, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE50]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xE50, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xE54, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xE58, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xE5C, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xE60, size 0x1, align 1 | MNotSaved
    char _pad_0E61[0x3]; // offset 0xE61
    float32 m_MaxWeight; // offset 0xE64, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0xE68, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0xE6C, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0xE70, size 0x200, align 1 | MNotSaved
    char _pad_1070[0x8]; // offset 0x1070
};
