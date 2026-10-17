#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xEC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA4]; // offset 0x0
    float32 m_MaxWeight; // offset 0xCA4, size 0x4, align 4
    float32 m_FadeDuration; // offset 0xCA8, size 0x4, align 4
    float32 m_Weight; // offset 0xCAC, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0xCB0, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xEB0, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xEB4, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xEB8, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xEBC, size 0x4, align 255
};
