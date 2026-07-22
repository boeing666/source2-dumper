#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xB08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    float32 m_MaxWeight; // offset 0x8E8, size 0x4, align 4
    float32 m_FadeDuration; // offset 0x8EC, size 0x4, align 4
    float32 m_Weight; // offset 0x8F0, size 0x4, align 4
    char[512] m_lookupFilename; // offset 0x8F4, size 0x200, align 1
    float32 m_LastEnterWeight; // offset 0xAF4, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xAF8, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xAFC, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xB00, size 0x4, align 255
    char _pad_0B04[0x4]; // offset 0xB04
};
