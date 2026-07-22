#pragma once

enum NecroSkeleTargetCategory_t : uint32_t  // sizeof 0x4
{
    SKELE_TARGET_INVALID = 0,
    SKELE_TARGET_HERO = 1,
    SKELE_TARGET_TROOPER = 2,
    SKELE_TARGET_BOSS = 3,
    SKELE_TARGET_NEUTRAL = 4,
};
