#pragma once

class CCitadel_KothCashIn : public CCitadelTriggerMultiCapturePoint /*0x0*/  // sizeof 0x1400, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC28]; // offset 0x0
    float32 m_flAmberFavored; // offset 0xC28, size 0x4, align 4
    float32 m_flSapphireFavored; // offset 0xC2C, size 0x4, align 4
    int32 m_iWinningTeam; // offset 0xC30, size 0x4, align 4
    int32 m_iTroopersToSpawn; // offset 0xC34, size 0x4, align 4
    char _pad_0C38[0x79C]; // offset 0xC38
    CHandle< CBaseEntity > m_hDropOffPlayer; // offset 0x13D4, size 0x4, align 4
    int32 m_nGold; // offset 0x13D8, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x13DC, size 0x4, align 4
    int32 m_nKOTHIdx; // offset 0x13E0, size 0x4, align 4
    int32 m_nAmberNetworth; // offset 0x13E4, size 0x4, align 4
    int32 m_nSapphireNetworth; // offset 0x13E8, size 0x4, align 4
    int32 m_nAmberGoldValue; // offset 0x13EC, size 0x4, align 4
    int32 m_nSapphireGoldValue; // offset 0x13F0, size 0x4, align 4
    bool m_bGiveUpHasWarned; // offset 0x13F4, size 0x1, align 1
    bool m_bGivenUp; // offset 0x13F5, size 0x1, align 1
    bool m_bWasBlockedAtAnyPoint; // offset 0x13F6, size 0x1, align 1
    char _pad_13F7[0x1]; // offset 0x13F7
    ParticleIndex_t m_nZoneParticle; // offset 0x13F8, size 0x4, align 255
    bool m_bCashedIn; // offset 0x13FC, size 0x1, align 1
    bool m_bPlayBlock; // offset 0x13FD, size 0x1, align 1
    bool m_bPlayContested; // offset 0x13FE, size 0x1, align 1
    char _pad_13FF[0x1]; // offset 0x13FF
};
