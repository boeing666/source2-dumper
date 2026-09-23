#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x13A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0x1180, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0x1184, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0x1188, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0x118C, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0x1190, size 0x1, align 1 | MNotSaved
    char _pad_1191[0x3]; // offset 0x1191
    float32 m_MaxWeight; // offset 0x1194, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0x1198, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0x119C, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0x11A0, size 0x200, align 1 | MNotSaved
    char _pad_13A0[0x8]; // offset 0x13A0
};
