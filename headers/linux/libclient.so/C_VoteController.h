#pragma once

class C_VoteController : public C_BaseEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x78C]; // offset 0x0
    int32 m_iActiveIssueIndex; // offset 0x78C, size 0x4, align 4
    int32 m_iOnlyTeamToVote; // offset 0x790, size 0x4, align 4
    int32[5] m_nVoteOptionCount; // offset 0x794, size 0x14, align 4
    int32 m_nPotentialVotes; // offset 0x7A8, size 0x4, align 4
    bool m_bVotesDirty; // offset 0x7AC, size 0x1, align 1
    bool m_bTypeDirty; // offset 0x7AD, size 0x1, align 1
    bool m_bIsYesNoVote; // offset 0x7AE, size 0x1, align 1
    char _pad_07AF[0x1]; // offset 0x7AF
};
