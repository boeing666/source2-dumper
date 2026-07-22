#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x12C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0x1098, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0x109C, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0x10A0, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0x10A4, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0x10A8, size 0x1, align 1 | MNotSaved
    char _pad_10A9[0x3]; // offset 0x10A9
    float32 m_MaxWeight; // offset 0x10AC, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0x10B0, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0x10B4, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0x10B8, size 0x200, align 1 | MNotSaved
    char _pad_12B8[0x8]; // offset 0x12B8
};
