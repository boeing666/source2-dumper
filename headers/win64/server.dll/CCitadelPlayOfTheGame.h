#pragma once

class CCitadelPlayOfTheGame  // sizeof 0x1A8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    char _pad_0030[0xE5]; // offset 0x30
    EPlayOfTheGameState m_eState; // offset 0x115, size 0x1, align 1
    bool m_bTriggerStarted; // offset 0x116, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0117[0x1]; // offset 0x117
    PlayOfTheGamePlaybackData_t m_playOfTheGameDataServer; // offset 0x118, size 0x90, align 255 | MNetworkEnable
};
