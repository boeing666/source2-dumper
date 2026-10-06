#pragma once

enum ECitadelPingWheelMessageType_t : uint32_t  // sizeof 0x4
{
    CITADEL_PING_WHEEL_PREGAME = 0,
    CITADEL_PING_WHEEL_POSTGAME = 1,
    CITADEL_PING_WHEEL_COUNT = 2,
};
