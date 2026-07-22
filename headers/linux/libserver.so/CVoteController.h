#pragma once

class CVoteController : public CBaseEntity /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int32 m_iActiveIssueIndex; // offset 0x788, size 0x4, align 4
    int32 m_iOnlyTeamToVote; // offset 0x78C, size 0x4, align 4
    int32[5] m_nVoteOptionCount; // offset 0x790, size 0x14, align 4
    int32 m_nPotentialVotes; // offset 0x7A4, size 0x4, align 4
    bool m_bIsYesNoVote; // offset 0x7A8, size 0x1, align 1
    char _pad_07A9[0x7]; // offset 0x7A9
    CountdownTimer m_acceptingVotesTimer; // offset 0x7B0, size 0x18, align 8
    CountdownTimer m_executeCommandTimer; // offset 0x7C8, size 0x18, align 8
    CountdownTimer m_resetVoteTimer; // offset 0x7E0, size 0x18, align 8
    int32[64] m_nVotesCast; // offset 0x7F8, size 0x100, align 4
    CPlayerSlot m_playerHoldingVote; // offset 0x8F8, size 0x4, align 4
    CPlayerSlot m_playerOverrideForVote; // offset 0x8FC, size 0x4, align 4
    int32 m_nHighestCountIndex; // offset 0x900, size 0x4, align 4
    char _pad_0904[0x4]; // offset 0x904
    CUtlVector< CBaseIssue* > m_potentialIssues; // offset 0x908, size 0x18, align 8
    CUtlVector< char* > m_VoteOptions; // offset 0x920, size 0x18, align 8
};
