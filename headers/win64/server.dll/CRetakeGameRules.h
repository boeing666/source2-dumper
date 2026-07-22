#pragma once

class CRetakeGameRules  // sizeof 0x1F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    int32 m_nMatchSeed; // offset 0x138, size 0x4, align 4
    bool m_bBlockersPresent; // offset 0x13C, size 0x1, align 1
    bool m_bRoundInProgress; // offset 0x13D, size 0x1, align 1
    char _pad_013E[0x2]; // offset 0x13E
    int32 m_iFirstSecondHalfRound; // offset 0x140, size 0x4, align 4
    int32 m_iBombSite; // offset 0x144, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_hBombPlanter; // offset 0x148, size 0x4, align 4
    char _pad_014C[0xA4]; // offset 0x14C
};
