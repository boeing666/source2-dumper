#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC4]; // offset 0x0
    float32 m_MaxWeight; // offset 0xBC4, size 0x4, align 4
    float32 m_FadeDuration; // offset 0xBC8, size 0x4, align 4
    float32 m_Weight; // offset 0xBCC, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0xBD0, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xDD0, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xDD4, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xDD8, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xDDC, size 0x4, align 255
};
