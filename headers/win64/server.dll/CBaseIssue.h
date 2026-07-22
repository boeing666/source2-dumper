#pragma once

class CBaseIssue  // sizeof 0x178, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    char[64] m_szTypeString; // offset 0x20, size 0x40, align 1
    char[260] m_szDetailsString; // offset 0x60, size 0x104, align 1
    int32 m_iNumYesVotes; // offset 0x164, size 0x4, align 4
    int32 m_iNumNoVotes; // offset 0x168, size 0x4, align 4
    int32 m_iNumPotentialVotes; // offset 0x16C, size 0x4, align 4
    CVoteController* m_pVoteController; // offset 0x170, size 0x8, align 8
};
