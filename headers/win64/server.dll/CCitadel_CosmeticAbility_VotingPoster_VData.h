#pragma once

class CCitadel_CosmeticAbility_VotingPoster_VData : public CitadelCosmeticAbilityVData /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CUtlVector< CitadelVotingPosterHeroData_t > m_vecVotingPosters; // offset 0x13A0, size 0x18, align 8
    int32 m_nDecalLimit; // offset 0x13B8, size 0x4, align 4
    char _pad_13BC[0x4]; // offset 0x13BC
};
