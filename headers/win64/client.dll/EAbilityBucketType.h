#pragma once

enum EAbilityBucketType : uint32_t  // sizeof 0x4
{
    EAbilityBucketInnate = -1,
    EAbilityBucketWeapon = 0,
    EAbilityBucketVitality = 1,
    EAbilityBucketSpirit = 2,
    EAbilityBucketCount = 3,
};
