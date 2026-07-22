#pragma once

class C_ColorCorrection : public C_BaseEntity /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client) {MNetworkIncludeByUserGroup MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    Vector m_vecOrigin; // offset 0x5F0, size 0xC, align 4 | MNotSaved
    float32 m_MinFalloff; // offset 0x5FC, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_MaxFalloff; // offset 0x600, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFadeInDuration; // offset 0x604, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFadeOutDuration; // offset 0x608, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flMaxWeight; // offset 0x60C, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flCurWeight; // offset 0x610, size 0x4, align 4 | MNetworkEnable MNotSaved
    char[512] m_netlookupFilename; // offset 0x614, size 0x200, align 1 | MNetworkEnable MNotSaved
    bool m_bEnabled; // offset 0x814, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bMaster; // offset 0x815, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bClientSide; // offset 0x816, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bExclusive; // offset 0x817, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool[1] m_bEnabledOnClient; // offset 0x818, size 0x1, align 1 | MNotSaved
    char _pad_0819[0x3]; // offset 0x819
    float32[1] m_flCurWeightOnClient; // offset 0x81C, size 0x4, align 4 | MNotSaved
    bool[1] m_bFadingIn; // offset 0x820, size 0x1, align 1 | MNotSaved
    char _pad_0821[0x3]; // offset 0x821
    float32[1] m_flFadeStartWeight; // offset 0x824, size 0x4, align 4 | MNotSaved
    float32[1] m_flFadeStartTime; // offset 0x828, size 0x4, align 4 | MNotSaved
    float32[1] m_flFadeDuration; // offset 0x82C, size 0x4, align 4 | MNotSaved
    char _pad_0830[0x8]; // offset 0x830
};
