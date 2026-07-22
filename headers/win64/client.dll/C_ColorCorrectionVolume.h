#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xD98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB70]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xB70, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xB74, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xB78, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xB7C, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xB80, size 0x1, align 1 | MNotSaved
    char _pad_0B81[0x3]; // offset 0xB81
    float32 m_MaxWeight; // offset 0xB84, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0xB88, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0xB8C, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0xB90, size 0x200, align 1 | MNotSaved
    char _pad_0D90[0x8]; // offset 0xD90
};
