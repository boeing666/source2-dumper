#pragma once

class C_DOTA_PlayerResource : public C_BaseEntity /*0x0*/  // sizeof 0x35B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bWasDataUpdateCreated; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x7]; // offset 0x601
    C_UtlVectorEmbeddedNetworkVar< PlayerResourcePlayerTeamData_t > m_vecPlayerTeamData; // offset 0x608, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< PlayerResourcePlayerData_t > m_vecPlayerData; // offset 0x670, size 0x68, align 8
    C_UtlVectorEmbeddedNetworkVar< PlayerResourceBroadcasterData_t > m_vecBrodcasterData; // offset 0x6D8, size 0x68, align 8
    C_NetworkUtlVectorBase< uint32 > m_vecEventsForDisplay; // offset 0x740, size 0x18, align 8
    int8 m_nPrimaryEventIndex; // offset 0x758, size 0x1, align 1
    char _pad_0759[0x3]; // offset 0x759
    uint32 m_nObsoleteEventIDAssociatedWithEventData; // offset 0x75C, size 0x4, align 4
    CHandle< C_BaseEntity >[64] m_playerIDToPlayer; // offset 0x760, size 0x100, align 4
    CHandle< C_BaseEntity >[64] m_playerIDToPawn; // offset 0x860, size 0x100, align 4
    CUtlSymbolLarge[64] m_iszName; // offset 0x960, size 0x200, align 8
    CUtlSymbolLarge[64] m_iszHTMLSafeName; // offset 0xB60, size 0x200, align 8
    CUtlSymbolLarge[64] m_iszFilteredHTMLSafeName; // offset 0xD60, size 0x200, align 8
    char _pad_0F60[0x1900]; // offset 0xF60
    bool m_bDirtySelection; // offset 0x2860, size 0x1, align 1
    bool m_bHasWorldTreesChanged; // offset 0x2861, size 0x1, align 1
    bool m_bWorldTreeModelsChanged; // offset 0x2862, size 0x1, align 1
    bool[24] m_bSwapWillingness; // offset 0x2863, size 0x18, align 1
    char _pad_287B[0x3D]; // offset 0x287B
    CUtlVector< CHandle< C_DOTA_Unit_Courier > >[15] m_hTeamCouriers; // offset 0x28B8, size 0x168, align 8
    CUtlVector< CHandle< C_DOTA_Unit_Courier > >[64] m_hPlayerCouriers; // offset 0x2A20, size 0x600, align 8
    CUtlVector< uint32 > m_vecOnstageHomeTeams; // offset 0x3020, size 0x18, align 8
    PlayerSeatAssignment_t*[24] m_pPlayerIDToOnstageSlot; // offset 0x3038, size 0xC0, align 8
    CUtlVector< PlayerSeatAssignment_t > m_vecOnstagePlayerSeats; // offset 0x30F8, size 0x18, align 8
    int32 m_nEventNPCReplaced; // offset 0x3110, size 0x4, align 4
    int32 m_nEventPlayerInfo; // offset 0x3114, size 0x4, align 4
    int32 m_nInventoryUpdated; // offset 0x3118, size 0x4, align 4
    char _pad_311C[0x494]; // offset 0x311C
};
