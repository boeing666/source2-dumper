#pragma once

enum ECustomGameWhitelistState : uint32_t  // sizeof 0x4
{
    CUSTOM_GAME_WHITELIST_STATE_UNKNOWN = 0,
    CUSTOM_GAME_WHITELIST_STATE_APPROVED = 1,
    CUSTOM_GAME_WHITELIST_STATE_REJECTED = 2,
};
