#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xEC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xC98, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xC9C, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xCA0, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xCA4, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xCA8, size 0x1, align 1 | MNotSaved
    char _pad_0CA9[0x3]; // offset 0xCA9
    float32 m_MaxWeight; // offset 0xCAC, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0xCB0, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0xCB4, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0xCB8, size 0x200, align 1 | MNotSaved
    char _pad_0EB8[0x8]; // offset 0xEB8
};
