#pragma once

enum EWraithCardType : uint32_t  // sizeof 0x4
{
    EWraithCardType_Spade = 0,
    EWraithCardType_Heart = 1,
    EWraithCardType_Diamond = 2,
    EWraithCardType_Club = 3,
    EWraithCardType_Joker = 4,
    EWraithCardType_JokerBonusCard = 5,
};
