#pragma once

enum TowerState_t : uint32_t  // sizeof 0x4
{
    TOWER_STATE_ACTIVE = 0,
    TOWER_STATE_SELECTED = 1,
    TOWER_STATE_INACTIVE = 2,
    TOWER_STATE_NO_BEAM_MOVEMENT = 3,
    TOWER_STATE_ACTIVE_CHANNELED = 4,
};
