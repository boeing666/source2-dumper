#pragma once

class CCitadelRankedSeasonRewardProp : public C_DynamicProp /*0x0*/, public IHideoutInteractable /*0x10B0*/  // sizeof 0x1120, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    CEntityIOOutput m_OnPropEnabled; // offset 0x10B8, size 0x18, align 255
    CEntityIOOutput m_OnPropDisabled; // offset 0x10D0, size 0x18, align 255
    uint32 m_unAccountID; // offset 0x10E8, size 0x4, align 4
    ECitadelRankedType m_eRankedType; // offset 0x10EC, size 0x4, align 4
    RankInterval_t m_unRankInterval; // offset 0x10F0, size 0x1, align 255
    PackedRank_t m_unPackedRank; // offset 0x10F1, size 0x1, align 255
    char _pad_10F2[0x2E]; // offset 0x10F2
};
