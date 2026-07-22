#pragma once

enum EFantasyShapeBehavior : uint32_t  // sizeof 0x4
{
    k_eFantasyShapeBehavior_Invalid = 0,
    k_eFantasyShapeBehavior_MinQuality = 1,
    k_eFantasyShapeBehavior_AdjBonus = 2,
    k_eFantasyShapeBehavior_StealBonus = 3,
    k_eFantasyShapeBehavior_OnlyOne = 4,
    k_eFantasyShapeBehavior_NeedMultiples = 5,
    k_eFantasyShapeBehavior_UniqueQualities = 6,
    k_eFantasyShapeBehavior_COUNT = 7,
};
