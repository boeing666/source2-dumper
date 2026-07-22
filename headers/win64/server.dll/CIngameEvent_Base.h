#pragma once

class CIngameEvent_Base : public CBaseEntity /*0x0*/  // sizeof 0x1A58, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    bool m_bInitialized; // offset 0x4B8, size 0x1, align 1
    char _pad_04B9[0x3]; // offset 0x4B9
    int32[24] m_CompendiumChallengeEventID; // offset 0x4BC, size 0x60, align 4
    int32[24] m_CompendiumChallengeSequenceID; // offset 0x51C, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinReward; // offset 0x57C, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinSplash; // offset 0x5DC, size 0x60, align 4
    int32[24] m_CompendiumChallengePointReward; // offset 0x63C, size 0x60, align 4
    bool[24] m_CompendiumChallengeCompleted; // offset 0x69C, size 0x18, align 1
    bool[24] m_CompendiumChallengeFailed; // offset 0x6B4, size 0x18, align 1
    int32[24] m_CompendiumChallengeProgress; // offset 0x6CC, size 0x60, align 4
    int32[24] m_QueryIDForProgress; // offset 0x72C, size 0x60, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlVectorEmbeddedNetworkVar< CDOTASubChallengeInfo > m_SubChallenges; // offset 0x790, size 0x68, align 8
    int32[10] m_CompendiumCoinWager; // offset 0x7F8, size 0x28, align 4
    itemid_t[10] m_CompendiumTokenWagerItemID; // offset 0x820, size 0x50, align 8
    int32[10] m_CompendiumWagerTokenBonusPct; // offset 0x870, size 0x28, align 4
    int32[10] m_CompendiumCoinWagerResults; // offset 0x898, size 0x28, align 4
    int32[10] m_CompendiumRankWagers; // offset 0x8C0, size 0x28, align 4
    float32 m_flWagerTimer; // offset 0x8E8, size 0x4, align 4
    GameTime_t m_flWagerEndTime; // offset 0x8EC, size 0x4, align 255
    CUtlVectorEmbeddedNetworkVar< CDOTA_PlayerChallengeInfo > m_CompendiumChallengeInfo; // offset 0x8F0, size 0xAD8, align 8
    CUtlVectorEmbeddedNetworkVar< CDOTA_CombatLogQueryProgress > m_PlayerQueryIDs; // offset 0x13C8, size 0x68, align 8
    int32[100] m_ProgressForQueryID; // offset 0x1430, size 0x190, align 4
    int32[100] m_GoalForQueryID; // offset 0x15C0, size 0x190, align 4
    int32[10] m_PlayerQuestRankPreviouslyCompleted; // offset 0x1750, size 0x28, align 4
    int32[10] m_PlayerQuestRankCompleted; // offset 0x1778, size 0x28, align 4
    PlayerID_t[10] m_PlayerBountyTarget; // offset 0x17A0, size 0x28, align 4
    GameTime_t[10] m_flPlayerBountyTimestamp; // offset 0x17C8, size 0x28, align 4
    int32[10] m_PlayerBountyCount; // offset 0x17F0, size 0x28, align 4
    bool[10] m_bHasSpentWager; // offset 0x1818, size 0xA, align 1
    bool[10] m_bPendingWagerSpend; // offset 0x1822, size 0xA, align 1
    bool[24] m_bCavernCrawlActive; // offset 0x182C, size 0x18, align 1
    CavernCrawlMapVariant_t[24] m_nCavernCrawlMapVariant; // offset 0x1844, size 0x18, align 1
    bool m_bCavernHalfCredit; // offset 0x185C, size 0x1, align 1
    bool[24] m_bBountyReminded; // offset 0x185D, size 0x18, align 1
    bool[24] m_bBountyAnnounced; // offset 0x1875, size 0x18, align 1
    char _pad_188D[0x3]; // offset 0x188D
    uint32[24] m_pCavernCrawlWinnings; // offset 0x1890, size 0x60, align 4
    uint32[24] m_pCavernCrawlPlusShardWinnings; // offset 0x18F0, size 0x60, align 4
    CUtlVector< DOTACavernCrawlMapResult_t >*[24] m_ppVecCavernCrawlMapResult; // offset 0x1950, size 0xC0, align 8
    int32 m_event_lobby_updated; // offset 0x1A10, size 0x4, align 4
    char _pad_1A14[0x44]; // offset 0x1A14
};
