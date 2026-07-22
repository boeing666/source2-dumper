#pragma once

enum PostProcessingGameStates : uint32_t  // sizeof 0x4
{
    PostProcState_Killed = 0,
    PostProcState_Black = 1,
    PostProcState_DoormanHotelVictim = 2,
    PostProcState_Blinded = 3,
    PostProcState_DrifterDarknessCaster = 4,
    PostProcState_MatchIntro = 5,
};
