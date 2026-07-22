#pragma once

enum quest_hud_types_t : uint32_t  // sizeof 0x4
{
    QUEST_HUD_TYPE_DEFAULT = 0,
    QUEST_HUD_TYPE_GOLD = 1,
    QUEST_HUD_TYPE_ATTACK = 2,
    QUEST_HUD_TYPE_DEFEND = 3,
    QUEST_NUM_HUD_TYPES = 4,
};
