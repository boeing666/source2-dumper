#pragma once

enum EPlayOfTheGameReplayTrigger : uint8_t  // sizeof 0x1
{
    EPlayOfTheGameReplayTrigger_Invalid = 0,
    EPlayOfTheGameReplayTrigger_HeroCalloutMajor = 1,
    EPlayOfTheGameReplayTrigger_HeroCalloutMinor = 2,
    EPlayOfTheGameReplayTrigger_BeginOutro = 3,
    EPlayOfTheGameReplayTrigger_RemoveIntro = 4,
};
