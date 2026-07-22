#pragma once

class C_IngameEvent_Base : public C_BaseEntity /*0x0*/  // sizeof 0x19B8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x5F8]; // offset 0x0
    bool m_bInitialized; // offset 0x5F8, size 0x1, align 1
    char _pad_05F9[0x3]; // offset 0x5F9
    int32[24] m_CompendiumChallengeEventID; // offset 0x5FC, size 0x60, align 4
    int32[24] m_CompendiumChallengeSequenceID; // offset 0x65C, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinReward; // offset 0x6BC, size 0x60, align 4
    int32[24] m_CompendiumChallengeCoinSplash; // offset 0x71C, size 0x60, align 4
    int32[24] m_CompendiumChallengePointReward; // offset 0x77C, size 0x60, align 4
    bool[24] m_CompendiumChallengeCompleted; // offset 0x7DC, size 0x18, align 1
    bool[24] m_CompendiumChallengeFailed; // offset 0x7F4, size 0x18, align 1
    int32[24] m_CompendiumChallengeProgress; // offset 0x80C, size 0x60, align 4
    int32[24] m_QueryIDForProgress; // offset 0x86C, size 0x60, align 4
    char _pad_08CC[0x4]; // offset 0x8CC
    C_UtlVectorEmbeddedNetworkVar< CDOTASubChallengeInfo > m_SubChallenges; // offset 0x8D0, size 0x68, align 8
    int32[10] m_CompendiumCoinWager; // offset 0x938, size 0x28, align 4
    itemid_t[10] m_CompendiumTokenWagerItemID; // offset 0x960, size 0x50, align 8
    int32[10] m_CompendiumWagerTokenBonusPct; // offset 0x9B0, size 0x28, align 4
    int32[10] m_CompendiumCoinWagerResults; // offset 0x9D8, size 0x28, align 4
    int32[10] m_CompendiumRankWagers; // offset 0xA00, size 0x28, align 4
    float32 m_flWagerTimer; // offset 0xA28, size 0x4, align 4
    GameTime_t m_flWagerEndTime; // offset 0xA2C, size 0x4, align 255
    C_UtlVectorEmbeddedNetworkVar< CDOTA_PlayerChallengeInfo > m_CompendiumChallengeInfo; // offset 0xA30, size 0xAD8, align 8
    C_UtlVectorEmbeddedNetworkVar< C_DOTA_CombatLogQueryProgress > m_PlayerQueryIDs; // offset 0x1508, size 0x68, align 8
    int32[100] m_ProgressForQueryID; // offset 0x1570, size 0x190, align 4
    int32[100] m_GoalForQueryID; // offset 0x1700, size 0x190, align 4
    int32[10] m_PlayerQuestRankPreviouslyCompleted; // offset 0x1890, size 0x28, align 4
    int32[10] m_PlayerQuestRankCompleted; // offset 0x18B8, size 0x28, align 4
    PlayerID_t[10] m_PlayerBountyTarget; // offset 0x18E0, size 0x28, align 4
    GameTime_t[10] m_flPlayerBountyTimestamp; // offset 0x1908, size 0x28, align 4
    int32[10] m_PlayerBountyCount; // offset 0x1930, size 0x28, align 4
    int32[24] m_PlayerBountyTimestamp_Obsolete; // offset 0x1958, size 0x60, align 4
};
