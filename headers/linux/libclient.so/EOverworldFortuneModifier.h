#pragma once

enum EOverworldFortuneModifier : uint32_t  // sizeof 0x4
{
    k_eOverworldFortuneModifier_Invalid = 0,
    k_eOverworldFortuneModifier_NoModifier = 1,
    k_eOverworldFortuneModifier_DoubleReward = 2,
    k_eOverworldFortuneModifier_OneAttempt = 3,
    k_eOverworldFortuneModifier_ReceiveAdditionalRandomToken = 4,
    k_eOverworldFortuneModifier_RerollFortune = 5,
    k_eOverworldFortuneModifier_ImmediatelyReceiveReward = 6,
    k_eOverworldFortuneModifier_EarnRewardTwice = 7,
};
