#pragma once

enum eRollType : uint32_t  // sizeof 0x4
{
    ROLL_NONE = -1,
    ROLL_STATS = 0,
    ROLL_CREDITS = 1,
    ROLL_LATE_JOIN_LOGO = 2,
    ROLL_OUTTRO = 3,
};
