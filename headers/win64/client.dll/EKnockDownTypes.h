#pragma once

enum EKnockDownTypes : uint32_t  // sizeof 0x4
{
    KnockdownLarge = 0,
    KnockdownMedium = 1,
    KnockdownSmall = 2,
    KnockdownPancake = 3,
    KnockdownParried = 4,
    ENumKnockdowns = 5,
    EKnockdownInvalid = 5,
};
