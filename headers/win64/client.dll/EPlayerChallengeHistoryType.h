#pragma once

enum EPlayerChallengeHistoryType : uint32_t  // sizeof 0x4
{
    k_EPlayerChallengeHistoryType_Invalid = 0,
    k_EPlayerChallengeHistoryType_KillEater = 1,
    k_EPlayerChallengeHistoryType_DotaPlusRelic = 2,
    k_EPlayerChallengeHistoryType_DotaPlusHeroPlayerChallenge = 3,
    k_EPlayerChallengeHistoryType_InGameEventChallenge = 4,
    k_EPlayerChallengeHistoryType_GuildContract = 5,
};
