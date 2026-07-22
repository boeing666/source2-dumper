#pragma once

enum StanceType_t : uint32_t  // sizeof 0x4
{
    STANCE_CURRENT = -1,
    STANCE_DEFAULT = 0,
    STANCE_CROUCHING = 1,
    STANCE_PRONE = 2,
    NUM_STANCES = 3,
};
