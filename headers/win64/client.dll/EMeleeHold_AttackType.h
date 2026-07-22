#pragma once

enum EMeleeHold_AttackType : uint32_t  // sizeof 0x4
{
    EAttackType_None = 0,
    EAttackType_Light = 1,
    EAttackType_Heavy = 2,
    EAttackType_HeavyAir = 3,
    EAttackType_Slide = 4,
};
