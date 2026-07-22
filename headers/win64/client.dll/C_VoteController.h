#pragma once

class C_VoteController : public C_BaseEntity /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x610]; // offset 0x0
    int32 m_iActiveIssueIndex; // offset 0x610, size 0x4, align 4
    int32 m_iOnlyTeamToVote; // offset 0x614, size 0x4, align 4
    int32[5] m_nVoteOptionCount; // offset 0x618, size 0x14, align 4
    int32 m_nPotentialVotes; // offset 0x62C, size 0x4, align 4
    bool m_bVotesDirty; // offset 0x630, size 0x1, align 1
    bool m_bTypeDirty; // offset 0x631, size 0x1, align 1
    bool m_bIsYesNoVote; // offset 0x632, size 0x1, align 1
    char _pad_0633[0x5]; // offset 0x633
};
