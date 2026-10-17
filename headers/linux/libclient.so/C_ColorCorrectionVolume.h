#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1010, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDE8]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xDE8, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xDEC, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xDF0, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xDF4, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xDF8, size 0x1, align 1 | MNotSaved
    char _pad_0DF9[0x3]; // offset 0xDF9
    float32 m_MaxWeight; // offset 0xDFC, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0xE00, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0xE04, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0xE08, size 0x200, align 1 | MNotSaved
    char _pad_1008[0x8]; // offset 0x1008
};
