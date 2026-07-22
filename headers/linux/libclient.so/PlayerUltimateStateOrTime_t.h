#pragma once

enum PlayerUltimateStateOrTime_t : uint32_t  // sizeof 0x4
{
    PLAYER_ULTIMATE_STATE_READY = 0,
    PLAYER_ULTIMATE_STATE_NO_MANA = -1,
    PLAYER_ULTIMATE_STATE_NOT_LEVELED = -2,
    PLAYER_ULTIMATE_STATE_HIDDEN = -3,
};
