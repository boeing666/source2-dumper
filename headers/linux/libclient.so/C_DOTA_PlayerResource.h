#pragma once

class C_DOTA_PlayerResource : public C_BaseEntity /*0x0*/  // sizeof 0x3728, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x779]; // offset 0x0
    bool m_bWasDataUpdateCreated; // offset 0x779, size 0x1, align 1
    char _pad_077A[0x6]; // offset 0x77A
    C_UtlVectorEmbeddedNetworkVar< PlayerResourcePlayerTeamData_t > m_vecPlayerTeamData; // offset 0x780, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< PlayerResourcePlayerData_t > m_vecPlayerData; // offset 0x7E8, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< PlayerResourceBroadcasterData_t > m_vecBrodcasterData; // offset 0x850, size 0x68, align 8
    C_NetworkUtlVectorBase< uint32 > m_vecEventsForDisplay; // offset 0x8B8, size 0x18, align 8
    int8 m_nPrimaryEventIndex; // offset 0x8D0, size 0x1, align 1
    char _pad_08D1[0x3]; // offset 0x8D1
    uint32 m_nObsoleteEventIDAssociatedWithEventData; // offset 0x8D4, size 0x4, align 4
    CHandle< C_BaseEntity >[64] m_playerIDToPlayer; // offset 0x8D8, size 0x100, align 4
    CHandle< C_BaseEntity >[64] m_playerIDToPawn; // offset 0x9D8, size 0x100, align 4
    CUtlSymbolLarge[64] m_iszName; // offset 0xAD8, size 0x200, align 8
    CUtlSymbolLarge[64] m_iszHTMLSafeName; // offset 0xCD8, size 0x200, align 8
    CUtlSymbolLarge[64] m_iszFilteredHTMLSafeName; // offset 0xED8, size 0x200, align 8
    char _pad_10D8[0x1900]; // offset 0x10D8
    bool m_bDirtySelection; // offset 0x29D8, size 0x1, align 1
    bool m_bHasWorldTreesChanged; // offset 0x29D9, size 0x1, align 1
    bool m_bWorldTreeModelsChanged; // offset 0x29DA, size 0x1, align 1
    bool[24] m_bSwapWillingness; // offset 0x29DB, size 0x18, align 1
    char _pad_29F3[0x3D]; // offset 0x29F3
    CUtlVector< CHandle< C_DOTA_Unit_Courier > >[15] m_hTeamCouriers; // offset 0x2A30, size 0x168, align 8
    CUtlVector< CHandle< C_DOTA_Unit_Courier > >[64] m_hPlayerCouriers; // offset 0x2B98, size 0x600, align 8
    CUtlVector< uint32 > m_vecOnstageHomeTeams; // offset 0x3198, size 0x18, align 8
    PlayerSeatAssignment_t*[24] m_pPlayerIDToOnstageSlot; // offset 0x31B0, size 0xC0, align 8
    CUtlVector< PlayerSeatAssignment_t > m_vecOnstagePlayerSeats; // offset 0x3270, size 0x18, align 8
    int32 m_nEventNPCReplaced; // offset 0x3288, size 0x4, align 4
    int32 m_nEventPlayerInfo; // offset 0x328C, size 0x4, align 4
    int32 m_nInventoryUpdated; // offset 0x3290, size 0x4, align 4
    char _pad_3294[0x494]; // offset 0x3294
};
