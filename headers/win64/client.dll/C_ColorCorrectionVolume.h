#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xE88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xC60, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xC64, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xC68, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xC6C, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xC70, size 0x1, align 1 | MNotSaved
    char _pad_0C71[0x3]; // offset 0xC71
    float32 m_MaxWeight; // offset 0xC74, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0xC78, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0xC7C, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0xC80, size 0x200, align 1 | MNotSaved
    char _pad_0E80[0x8]; // offset 0xE80
};
