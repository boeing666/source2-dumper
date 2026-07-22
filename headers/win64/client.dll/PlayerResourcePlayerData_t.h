#pragma once

struct PlayerResourcePlayerData_t  // sizeof 0xF0, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    bool m_bIsValid; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
    CUtlSymbolLarge m_iszPlayerName; // offset 0x38, size 0x8, align 8
    int32 m_iPlayerTeam; // offset 0x40, size 0x4, align 4
    bool m_bFullyJoinedServer; // offset 0x44, size 0x1, align 1
    bool m_bFakeClient; // offset 0x45, size 0x1, align 1
    bool m_bIsBroadcaster; // offset 0x46, size 0x1, align 1
    char _pad_0047[0x1]; // offset 0x47
    uint32 m_iBroadcasterChannel; // offset 0x48, size 0x4, align 4
    uint32 m_iBroadcasterChannelSlot; // offset 0x4C, size 0x4, align 4
    bool m_bIsBroadcasterChannelCameraman; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x3]; // offset 0x51
    int32 m_iConnectionState; // offset 0x54, size 0x4, align 4
    uint64 m_iPlayerSteamID; // offset 0x58, size 0x8, align 8
    DOTATeam_t m_eCoachTeam; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
    C_NetworkUtlVectorBase< PlayerID_t > m_vecPrivateCoachPlayerIDs; // offset 0x68, size 0x18, align 8
    uint32 m_unCoachRating; // offset 0x80, size 0x4, align 4
    DOTATeam_t m_eLiveSpectatorTeam; // offset 0x84, size 0x4, align 4
    int32 m_nLiveSpectatorSpectatedHeroIndex; // offset 0x88, size 0x4, align 4
    bool m_bIsPlusSubscriber; // offset 0x8C, size 0x1, align 1
    bool m_bWasMVPLastGame; // offset 0x8D, size 0x1, align 1
    CavernCrawlMapVariant_t m_nCavernCrawlMapVariant; // offset 0x8E, size 0x1, align 255
    char _pad_008F[0x1]; // offset 0x8F
    int32[3] m_eAccoladeType; // offset 0x90, size 0xC, align 4
    char _pad_009C[0x4]; // offset 0x9C
    uint64[3] m_unAccoladeData; // offset 0xA0, size 0x18, align 8
    int32 m_iRankTier; // offset 0xB8, size 0x4, align 4
    int32 m_iLeaderboardRank; // offset 0xBC, size 0x4, align 4
    int32 m_eMmrBoostType; // offset 0xC0, size 0x4, align 4
    int32 m_iTitle; // offset 0xC4, size 0x4, align 4
    uint64 m_unFavTeamPacked; // offset 0xC8, size 0x8, align 8
    CPlayerSlot m_nPlayerSlot; // offset 0xD0, size 0x4, align 4
    bool m_bIsBot; // offset 0xD4, size 0x1, align 1
    bool[5] m_bHasNeutralTier; // offset 0xD5, size 0x5, align 1
    bool[5] m_bHasRedeemedNeutralTier; // offset 0xDA, size 0x5, align 1
    char _pad_00DF[0x1]; // offset 0xDF
    int32 m_nCommLevel; // offset 0xE0, size 0x4, align 4
    int32 m_nBehaviorLevel; // offset 0xE4, size 0x4, align 4
    float32 m_flLastCommsTime; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x4]; // offset 0xEC
};
