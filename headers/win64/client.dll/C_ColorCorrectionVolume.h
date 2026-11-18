#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xEE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xCC0, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xCC4, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xCC8, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xCCC, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xCD0, size 0x1, align 1 | MNotSaved
    char _pad_0CD1[0x3]; // offset 0xCD1
    float32 m_MaxWeight; // offset 0xCD4, size 0x4, align 4 | MNotSaved
    float32 m_FadeDuration; // offset 0xCD8, size 0x4, align 4 | MNotSaved
    float32 m_Weight; // offset 0xCDC, size 0x4, align 4 | MNotSaved
    char[512] m_lookupFilename; // offset 0xCE0, size 0x200, align 1 | MNotSaved
    char _pad_0EE0[0x8]; // offset 0xEE0
};
