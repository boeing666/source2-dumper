#pragma once

class CCitadelHideoutOwnerRankedSeasonRewardProp : public C_BaseEntity /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CEntityIOOutput m_OnPropEnabled; // offset 0x600, size 0x18, align 255
    CEntityIOOutput m_OnPropDisabled; // offset 0x618, size 0x18, align 255
    ECitadelRankedType m_eRankedType; // offset 0x630, size 0x4, align 4
    RankInterval_t m_unRankInterval; // offset 0x634, size 0x1, align 255
    char _pad_0635[0x3]; // offset 0x635
};
