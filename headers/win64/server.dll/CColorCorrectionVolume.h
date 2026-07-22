#pragma once

class CColorCorrectionVolume : public CBaseTrigger /*0x0*/  // sizeof 0xB00, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    float32 m_MaxWeight; // offset 0x8E0, size 0x4, align 4 | MNetworkEnable
    float32 m_FadeDuration; // offset 0x8E4, size 0x4, align 4 | MNetworkEnable
    float32 m_Weight; // offset 0x8E8, size 0x4, align 4 | MNetworkEnable
    char[512] m_lookupFilename; // offset 0x8EC, size 0x200, align 1 | MNetworkEnable
    float32 m_LastEnterWeight; // offset 0xAEC, size 0x4, align 4
    GameTime_t m_LastEnterTime; // offset 0xAF0, size 0x4, align 255
    float32 m_LastExitWeight; // offset 0xAF4, size 0x4, align 4
    GameTime_t m_LastExitTime; // offset 0xAF8, size 0x4, align 255
    char _pad_0AFC[0x4]; // offset 0xAFC
};
