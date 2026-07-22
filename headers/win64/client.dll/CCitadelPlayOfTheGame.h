#pragma once

class CCitadelPlayOfTheGame  // sizeof 0x160, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    char _pad_0030[0x98]; // offset 0x30
    EPlayOfTheGameState m_eState; // offset 0xC8, size 0x1, align 1
    bool m_bTriggerStarted; // offset 0xC9, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_00CA[0x6]; // offset 0xCA
    PlayOfTheGamePlaybackData_t m_playOfTheGameDataServer; // offset 0xD0, size 0x90, align 255 | MNetworkEnable
};
