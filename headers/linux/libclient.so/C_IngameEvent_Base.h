#pragma once

class C_IngameEvent_Base : public C_BaseEntity /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bInitialized; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    int32[24] m_CompendiumChallengeEventID; // offset 0x77C, size 0x60, align 4
    int32[24] m_CompendiumChallengeSequenceID; // offset 0x7DC, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinReward; // offset 0x83C, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinSplash; // offset 0x89C, size 0x60, align 4
    int32[24] m_CompendiumChallengePointReward; // offset 0x8FC, size 0x60, align 4
    bool[24] m_CompendiumChallengeCompleted; // offset 0x95C, size 0x18, align 1
    bool[24] m_CompendiumChallengeFailed; // offset 0x974, size 0x18, align 1
    int32[24] m_CompendiumChallengeProgress; // offset 0x98C, size 0x60, align 4
    int32[24] m_QueryIDForProgress; // offset 0x9EC, size 0x60, align 4
    char _pad_0A4C[0x4]; // offset 0xA4C
    C_UtlVectorEmbeddedNetworkVar< CDOTASubChallengeInfo > m_SubChallenges; // offset 0xA50, size 0x68, align 8
    int32[10] m_CompendiumCoinWager; // offset 0xAB8, size 0x28, align 4
    itemid_t[10] m_CompendiumTokenWagerItemID; // offset 0xAE0, size 0x50, align 8
    int32[10] m_CompendiumWagerTokenBonusPct; // offset 0xB30, size 0x28, align 4
    int32[10] m_CompendiumCoinWagerResults; // offset 0xB58, size 0x28, align 4
    int32[10] m_CompendiumRankWagers; // offset 0xB80, size 0x28, align 4
    float32 m_flWagerTimer; // offset 0xBA8, size 0x4, align 4
    GameTime_t m_flWagerEndTime; // offset 0xBAC, size 0x4, align 255
    C_UtlVectorEmbeddedNetworkVar< CDOTA_PlayerChallengeInfo > m_CompendiumChallengeInfo; // offset 0xBB0, size 0xAD8, align 8
    C_UtlVectorEmbeddedNetworkVar< C_DOTA_CombatLogQueryProgress > m_PlayerQueryIDs; // offset 0x1688, size 0x68, align 8
    int32[100] m_ProgressForQueryID; // offset 0x16F0, size 0x190, align 4
    int32[100] m_GoalForQueryID; // offset 0x1880, size 0x190, align 4
    int32[10] m_PlayerQuestRankPreviouslyCompleted; // offset 0x1A10, size 0x28, align 4
    int32[10] m_PlayerQuestRankCompleted; // offset 0x1A38, size 0x28, align 4
    PlayerID_t[10] m_PlayerBountyTarget; // offset 0x1A60, size 0x28, align 4
    GameTime_t[10] m_flPlayerBountyTimestamp; // offset 0x1A88, size 0x28, align 4
    int32[10] m_PlayerBountyCount; // offset 0x1AB0, size 0x28, align 4
    int32[24] m_PlayerBountyTimestamp_Obsolete; // offset 0x1AD8, size 0x60, align 4
};
