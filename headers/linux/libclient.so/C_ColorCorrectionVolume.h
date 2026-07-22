#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1248, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0x1020, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0x1024, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0x1028, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0x102C, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0x1030, size 0x1, align 1 | MNotSaved
    char _pad_1031[0x3]; // offset 0x1031
    float32 m_MaxWeight; // offset 0x1034, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0x1038, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0x103C, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0x1040, size 0x200, align 1 | MNotSaved
    char _pad_1240[0x8]; // offset 0x1240
};
