#pragma once

enum Touch_t : uint32_t  // sizeof 0x4
{
    touch_none = 0,
    touch_player_only = 1,
    touch_npc_only = 2,
    touch_player_or_npc = 3,
    touch_player_or_npc_or_physicsprop = 4,
};
