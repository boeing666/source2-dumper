#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1330, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0x1108, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0x110C, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0x1110, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0x1114, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0x1118, size 0x1, align 1 | MNotSaved
    char _pad_1119[0x3]; // offset 0x1119
    float32 m_MaxWeight; // offset 0x111C, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0x1120, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0x1124, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0x1128, size 0x200, align 1 | MNotSaved
    char _pad_1328[0x8]; // offset 0x1328
};
