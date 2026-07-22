#pragma once

enum EPlayOfTheGameState : uint8_t  // sizeof 0x1
{
    EPlayOfTheGameState_Inactive = 0,
    EPlayOfTheGameState_Intro = 1,
    EPlayOfTheGameState_Replaying = 2,
    EPlayOfTheGameState_Outro = 3,
};
