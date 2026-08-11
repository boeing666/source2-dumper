#pragma once

class CStreetBrawlController  // sizeof 0x130, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    EStreetBrawlGameState m_eStreetBrawlState; // offset 0x8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    GameTime_t m_flStreetBrawlStateStartTime; // offset 0xC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flNextStateTime; // offset 0x10, size 0x4, align 255 | MNetworkEnable
    float32 m_flStreetBrawlTotalNonCombatTime; // offset 0x14, size 0x4, align 4 | MNetworkEnable
    int32 m_iRound; // offset 0x18, size 0x4, align 4 | MNetworkEnable
    int32 m_iLastBuyCountDown; // offset 0x1C, size 0x4, align 4 | MNetworkEnable
    int32 m_iTeamSapphireScore; // offset 0x20, size 0x4, align 4 | MNetworkEnable
    int32 m_iTeamAmberScore; // offset 0x24, size 0x4, align 4 | MNetworkEnable
    float32 m_tNoTrooperTime; // offset 0x28, size 0x4, align 4
    bool m_bOvertime; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
    int32 m_nScoringTeam; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< CHandle< CBaseEntity > > m_vTeamSapphireBoss; // offset 0x38, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vTeamAmberBoss; // offset 0x50, size 0x18, align 8
    char _pad_0068[0x28]; // offset 0x68
    CUtlOrderedMap< CUtlString, CUtlString > m_mapOriginalConVarVals; // offset 0x90, size 0x28, align 8
    CUtlVector< int32 > m_vecOfferedLegendaries; // offset 0xB8, size 0x18, align 8
    CUtlVector< int32 > m_vecOfferedRares; // offset 0xD0, size 0x18, align 8
    CUtlVector< int32 > m_vecOfferedEnhanced; // offset 0xE8, size 0x18, align 8
    int32 m_nShuffleSeed; // offset 0x100, size 0x4, align 4
    char _pad_0104[0x2C]; // offset 0x104
};
