#pragma once

class CCitadel_CosmeticAbility_VotingPoster_VData : public CitadelCosmeticAbilityVData /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CUtlVector< CitadelVotingPosterHeroData_t > m_vecVotingPosters; // offset 0x13E8, size 0x18, align 8
    int32 m_nDecalLimit; // offset 0x1400, size 0x4, align 4
    char _pad_1404[0x4]; // offset 0x1404
};
