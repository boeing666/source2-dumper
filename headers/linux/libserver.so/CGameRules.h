#pragma once

class CGameRules  // sizeof 0xD0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    char[128] m_szQuestName; // offset 0x30, size 0x80, align 1
    int32 m_nQuestPhase; // offset 0xB0, size 0x4, align 4
    uint32 m_nLastMatchTime; // offset 0xB4, size 0x4, align 4
    uint64 m_nLastMatchTime_MatchID64; // offset 0xB8, size 0x8, align 8
    int32 m_nTotalPausedTicks; // offset 0xC0, size 0x4, align 4
    int32 m_nPauseStartTick; // offset 0xC4, size 0x4, align 4
    bool m_bGamePaused; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x7]; // offset 0xC9
};
