#pragma once

class CVoteController : public CBaseEntity /*0x0*/  // sizeof 0x658, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int32 m_iActiveIssueIndex; // offset 0x4A8, size 0x4, align 4
    int32 m_iOnlyTeamToVote; // offset 0x4AC, size 0x4, align 4
    int32[5] m_nVoteOptionCount; // offset 0x4B0, size 0x14, align 4
    int32 m_nPotentialVotes; // offset 0x4C4, size 0x4, align 4
    bool m_bIsYesNoVote; // offset 0x4C8, size 0x1, align 1
    char _pad_04C9[0x7]; // offset 0x4C9
    CountdownTimer m_acceptingVotesTimer; // offset 0x4D0, size 0x18, align 8
    CountdownTimer m_executeCommandTimer; // offset 0x4E8, size 0x18, align 8
    CountdownTimer m_resetVoteTimer; // offset 0x500, size 0x18, align 8
    int32[64] m_nVotesCast; // offset 0x518, size 0x100, align 4
    CPlayerSlot m_playerHoldingVote; // offset 0x618, size 0x4, align 4
    CPlayerSlot m_playerOverrideForVote; // offset 0x61C, size 0x4, align 4
    int32 m_nHighestCountIndex; // offset 0x620, size 0x4, align 4
    char _pad_0624[0x4]; // offset 0x624
    CUtlVector< CBaseIssue* > m_potentialIssues; // offset 0x628, size 0x18, align 8
    CUtlVector< char* > m_VoteOptions; // offset 0x640, size 0x18, align 8
};
