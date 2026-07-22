#pragma once

enum EPlayerPlayState : uint32_t  // sizeof 0x4
{
    EPlayerStateInvalid = -1,
    EPlayerActive = 0,
    EPlayerAwaitingHeroAssignment = 1,
    EPlayerChoosingHero = 2,
    EPlayerPlayStateCount = 3,
};
