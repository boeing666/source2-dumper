#pragma once

struct PlayerResourcePlayerEventData_t  // sizeof 0x100, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    uint32 m_iEventID; // offset 0x30, size 0x4, align 4
    uint32 m_iEventLevel; // offset 0x34, size 0x4, align 4
    uint32 m_iEventPoints; // offset 0x38, size 0x4, align 4
    uint32 m_iEventPremiumPoints; // offset 0x3C, size 0x4, align 4
    uint32 m_iEventEffectsMask; // offset 0x40, size 0x4, align 4
    bool m_bIsEventOwned; // offset 0x44, size 0x1, align 1
    char _pad_0045[0x3]; // offset 0x45
    uint32 m_iFavoriteTeam; // offset 0x48, size 0x4, align 4
    uint16 m_iFavoriteTeamQuality; // offset 0x4C, size 0x2, align 2
    uint8 m_iAvailableSalutes; // offset 0x4E, size 0x1, align 1
    uint8 m_iSaluteAmountIndex; // offset 0x4F, size 0x1, align 1
    uint32 m_iEventWagerStreak; // offset 0x50, size 0x4, align 4
    uint8 m_iEventTeleportFXLevel; // offset 0x54, size 0x1, align 1
    char _pad_0055[0x3]; // offset 0x55
    int32[5] m_nCandyPointsReason; // offset 0x58, size 0x14, align 4
    char _pad_006C[0x4]; // offset 0x6C
    C_UtlVectorEmbeddedNetworkVar< PlayerResourcePlayerPeriodicResourceData_t > m_vecPeriodicResources; // offset 0x70, size 0x68, align 8
    uint8 m_iObsoleteSaluteAmounts; // offset 0xD8, size 0x1, align 1
    char _pad_00D9[0x3]; // offset 0xD9
    uint32 m_iObsoleteEventArcanaPeriodicResourceRemaining; // offset 0xDC, size 0x4, align 4
    uint32 m_iObsoleteEventArcanaPeriodicResourceMax; // offset 0xE0, size 0x4, align 4
    uint32 m_iObsoleteEventWagerTokensRemaining; // offset 0xE4, size 0x4, align 4
    uint32 m_iObsoleteEventWagerTokensMax; // offset 0xE8, size 0x4, align 4
    uint32 m_iObsoleteEventBountiesRemaining; // offset 0xEC, size 0x4, align 4
    uint32 m_iObsoleteRankWagersAvailable; // offset 0xF0, size 0x4, align 4
    uint32 m_iObsoleteRankWagersMax; // offset 0xF4, size 0x4, align 4
    uint32 m_iObsoleteEventPointAdjustmentsRemaining; // offset 0xF8, size 0x4, align 4
    uint16 m_iObsoleteEventRanks; // offset 0xFC, size 0x2, align 2
    char _pad_00FE[0x2]; // offset 0xFE
};
