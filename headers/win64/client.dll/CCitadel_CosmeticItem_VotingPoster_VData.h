#pragma once

class CCitadel_CosmeticItem_VotingPoster_VData : public CitadelItemVData /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CUtlVector< CitadelVotingPosterHeroData_t > m_vecVotingPosters; // offset 0x18B8, size 0x18, align 8
    int32 m_nDecalLimit; // offset 0x18D0, size 0x4, align 4
    char _pad_18D4[0x4]; // offset 0x18D4
};
