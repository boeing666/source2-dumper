#pragma once

enum ETeamFanContentStatus : uint32_t  // sizeof 0x4
{
    TEAM_FAN_CONTENT_STATUS_INVALID = 0,
    TEAM_FAN_CONTENT_STATUS_PENDING = 1,
    TEAM_FAN_CONTENT_STATUS_EVALUATED = 2,
};
