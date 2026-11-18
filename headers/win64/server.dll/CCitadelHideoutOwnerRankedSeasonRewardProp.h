#pragma once

class CCitadelHideoutOwnerRankedSeasonRewardProp : public CBaseEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    CEntityIOOutput m_OnPropEnabled; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_OnPropDisabled; // offset 0x4D8, size 0x18, align 255
    char _pad_04F0[0x8]; // offset 0x4F0
    ECitadelRankedType m_eRankedType; // offset 0x4F8, size 0x4, align 4
    RankInterval_t m_unRankInterval; // offset 0x4FC, size 0x1, align 255
    char _pad_04FD[0x3]; // offset 0x4FD
};
