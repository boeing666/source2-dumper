#pragma once

class CBaseIssue  // sizeof 0x1078, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    char[64] m_szTypeString; // offset 0x20, size 0x40, align 1
    char[4096] m_szDetailsString; // offset 0x60, size 0x1000, align 1
    int32 m_iNumYesVotes; // offset 0x1060, size 0x4, align 4
    int32 m_iNumNoVotes; // offset 0x1064, size 0x4, align 4
    int32 m_iNumPotentialVotes; // offset 0x1068, size 0x4, align 4
    char _pad_106C[0x4]; // offset 0x106C
    CVoteController* m_pVoteController; // offset 0x1070, size 0x8, align 8
};
