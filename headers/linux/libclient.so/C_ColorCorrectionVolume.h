#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xF20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xCF8, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xCFC, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xD00, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xD04, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xD08, size 0x1, align 1 | MNotSaved
    char _pad_0D09[0x3]; // offset 0xD09
    float32 m_MaxWeight; // offset 0xD0C, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0xD10, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0xD14, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0xD18, size 0x200, align 1 | MNotSaved
    char _pad_0F18[0x8]; // offset 0xF18
};
