#pragma once

class C_GameRules  // sizeof 0x40, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    int32 m_nTotalPausedTicks; // offset 0x30, size 0x4, align 4
    int32 m_nPauseStartTick; // offset 0x34, size 0x4, align 4
    bool m_bGamePaused; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
};
