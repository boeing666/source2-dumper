#pragma once

class CIngameEvent_Base : public CBaseEntity /*0x0*/  // sizeof 0x1D38, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    bool m_bInitialized; // offset 0x798, size 0x1, align 1
    char _pad_0799[0x3]; // offset 0x799
    int32[24] m_CompendiumChallengeEventID; // offset 0x79C, size 0x60, align 4
    int32[24] m_CompendiumChallengeSequenceID; // offset 0x7FC, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinReward; // offset 0x85C, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinSplash; // offset 0x8BC, size 0x60, align 4
    int32[24] m_CompendiumChallengePointReward; // offset 0x91C, size 0x60, align 4
    bool[24] m_CompendiumChallengeCompleted; // offset 0x97C, size 0x18, align 1
    bool[24] m_CompendiumChallengeFailed; // offset 0x994, size 0x18, align 1
    int32[24] m_CompendiumChallengeProgress; // offset 0x9AC, size 0x60, align 4
    int32[24] m_QueryIDForProgress; // offset 0xA0C, size 0x60, align 4
    char _pad_0A6C[0x4]; // offset 0xA6C
    CUtlVectorEmbeddedNetworkVar< CDOTASubChallengeInfo > m_SubChallenges; // offset 0xA70, size 0x68, align 8
    int32[10] m_CompendiumCoinWager; // offset 0xAD8, size 0x28, align 4
    itemid_t[10] m_CompendiumTokenWagerItemID; // offset 0xB00, size 0x50, align 8
    int32[10] m_CompendiumWagerTokenBonusPct; // offset 0xB50, size 0x28, align 4
    int32[10] m_CompendiumCoinWagerResults; // offset 0xB78, size 0x28, align 4
    int32[10] m_CompendiumRankWagers; // offset 0xBA0, size 0x28, align 4
    float32 m_flWagerTimer; // offset 0xBC8, size 0x4, align 4
    GameTime_t m_flWagerEndTime; // offset 0xBCC, size 0x4, align 255
    CUtlVectorEmbeddedNetworkVar< CDOTA_PlayerChallengeInfo > m_CompendiumChallengeInfo; // offset 0xBD0, size 0xAD8, align 8
    CUtlVectorEmbeddedNetworkVar< CDOTA_CombatLogQueryProgress > m_PlayerQueryIDs; // offset 0x16A8, size 0x68, align 8
    int32[100] m_ProgressForQueryID; // offset 0x1710, size 0x190, align 4
    int32[100] m_GoalForQueryID; // offset 0x18A0, size 0x190, align 4
    int32[10] m_PlayerQuestRankPreviouslyCompleted; // offset 0x1A30, size 0x28, align 4
    int32[10] m_PlayerQuestRankCompleted; // offset 0x1A58, size 0x28, align 4
    PlayerID_t[10] m_PlayerBountyTarget; // offset 0x1A80, size 0x28, align 4
    GameTime_t[10] m_flPlayerBountyTimestamp; // offset 0x1AA8, size 0x28, align 4
    int32[10] m_PlayerBountyCount; // offset 0x1AD0, size 0x28, align 4
    bool[10] m_bHasSpentWager; // offset 0x1AF8, size 0xA, align 1
    bool[10] m_bPendingWagerSpend; // offset 0x1B02, size 0xA, align 1
    bool[24] m_bCavernCrawlActive; // offset 0x1B0C, size 0x18, align 1
    CavernCrawlMapVariant_t[24] m_nCavernCrawlMapVariant; // offset 0x1B24, size 0x18, align 1
    bool m_bCavernHalfCredit; // offset 0x1B3C, size 0x1, align 1
    bool[24] m_bBountyReminded; // offset 0x1B3D, size 0x18, align 1
    bool[24] m_bBountyAnnounced; // offset 0x1B55, size 0x18, align 1
    char _pad_1B6D[0x3]; // offset 0x1B6D
    uint32[24] m_pCavernCrawlWinnings; // offset 0x1B70, size 0x60, align 4
    uint32[24] m_pCavernCrawlPlusShardWinnings; // offset 0x1BD0, size 0x60, align 4
    CUtlVector< DOTACavernCrawlMapResult_t >*[24] m_ppVecCavernCrawlMapResult; // offset 0x1C30, size 0xC0, align 8
    int32 m_event_lobby_updated; // offset 0x1CF0, size 0x4, align 4
    char _pad_1CF4[0x44]; // offset 0x1CF4
};
