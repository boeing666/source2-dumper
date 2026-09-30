#pragma once

class CCitadel_KothCashIn : public CCitadelTriggerMultiCapturePoint /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD30]; // offset 0x0
    float32 m_flAmberFavored; // offset 0xD30, size 0x4, align 4
    float32 m_flSapphireFavored; // offset 0xD34, size 0x4, align 4
    int32 m_iWinningTeam; // offset 0xD38, size 0x4, align 4
    int32 m_iTroopersToSpawn; // offset 0xD3C, size 0x4, align 4
    char _pad_0D40[0x79C]; // offset 0xD40
    CHandle< CBaseEntity > m_hDropOffPlayer; // offset 0x14DC, size 0x4, align 4
    int32 m_nGold; // offset 0x14E0, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x14E4, size 0x4, align 4
    int32 m_nKOTHIdx; // offset 0x14E8, size 0x4, align 4
    int32 m_nAmberNetworth; // offset 0x14EC, size 0x4, align 4
    int32 m_nSapphireNetworth; // offset 0x14F0, size 0x4, align 4
    int32 m_nAmberGoldValue; // offset 0x14F4, size 0x4, align 4
    int32 m_nSapphireGoldValue; // offset 0x14F8, size 0x4, align 4
    bool m_bGiveUpHasWarned; // offset 0x14FC, size 0x1, align 1
    bool m_bGivenUp; // offset 0x14FD, size 0x1, align 1
    bool m_bWasBlockedAtAnyPoint; // offset 0x14FE, size 0x1, align 1
    char _pad_14FF[0x1]; // offset 0x14FF
    ParticleIndex_t m_nZoneParticle; // offset 0x1500, size 0x4, align 255
    bool m_bCashedIn; // offset 0x1504, size 0x1, align 1
    bool m_bPlayBlock; // offset 0x1505, size 0x1, align 1
    bool m_bPlayContested; // offset 0x1506, size 0x1, align 1
    char _pad_1507[0x1]; // offset 0x1507
};
