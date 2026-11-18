#pragma once

class CCitadelRankedSeasonRewardProp : public CDynamicProp /*0x0*/, public IHideoutInteractable /*0xDA0*/  // sizeof 0xDF0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    CEntityIOOutput m_OnPropEnabled; // offset 0xDA8, size 0x18, align 255
    CEntityIOOutput m_OnPropDisabled; // offset 0xDC0, size 0x18, align 255
    uint32 m_unAccountID; // offset 0xDD8, size 0x4, align 4
    ECitadelRankedType m_eRankedType; // offset 0xDDC, size 0x4, align 4
    RankInterval_t m_unRankInterval; // offset 0xDE0, size 0x1, align 255
    PackedRank_t m_unPackedRank; // offset 0xDE1, size 0x1, align 255
    char _pad_0DE2[0xE]; // offset 0xDE2
};
