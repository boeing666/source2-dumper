#pragma once

class C_ColorCorrectionVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xCA0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    float32 m_LastEnterWeight; // offset 0xA78, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastEnterTime; // offset 0xA7C, size 0x4, align 255 | MNotSaved
    float32 m_LastExitWeight; // offset 0xA80, size 0x4, align 4 | MNotSaved
    GameTime_t m_LastExitTime; // offset 0xA84, size 0x4, align 255 | MNotSaved
    bool m_bEnabled; // offset 0xA88, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0A89[0x3]; // offset 0xA89
    float32 m_MaxWeight; // offset 0xA8C, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_FadeDuration; // offset 0xA90, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_Weight; // offset 0xA94, size 0x4, align 4 | MNetworkEnable MNotSaved
    char[512] m_lookupFilename; // offset 0xA98, size 0x200, align 1 | MNetworkEnable MNotSaved
    char _pad_0C98[0x8]; // offset 0xC98
};
