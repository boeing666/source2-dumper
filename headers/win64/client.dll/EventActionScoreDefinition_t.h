#pragma once

struct EventActionScoreDefinition_t  // sizeof 0x68, align 0x8 (client) {MGetKV3ClassDefaults}
{
    uint32 unActionScore; // offset 0x0, size 0x4, align 4
    uint32 unActionScoreRepeatInterval; // offset 0x4, size 0x4, align 4
    CUtlString strRewardName; // offset 0x8, size 0x8, align 8
    CUtlString strRewardDescription; // offset 0x10, size 0x8, align 8
    CUtlString strRewardImage; // offset 0x18, size 0x8, align 8
    CUtlString strRewardClass; // offset 0x20, size 0x8, align 8
    CUtlString strAchievementCategory; // offset 0x28, size 0x8, align 8
    bool bIsAchievement; // offset 0x30, size 0x1, align 1
    bool bShowAchievementQuantity; // offset 0x31, size 0x1, align 1
    char _pad_0032[0x6]; // offset 0x32
    CUtlVector< EventGrantDefinition_t* > vecRewards; // offset 0x38, size 0x18, align 8
    CUtlVector< EventActionScoreDefinition_t::RelatedAction_t > vecRelatedActions; // offset 0x50, size 0x18, align 8
};
