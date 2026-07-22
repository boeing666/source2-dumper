#pragma once

enum ECitadelGameMessages : uint32_t  // sizeof 0x4
{
    k_EMsgGameServerToClientConnectionStatus = 10,
    k_EMsgGameServerToClientInitialGameState = 12,
    k_EMsgGameServerToClientGameCompleted = 13,
    k_EMsgGameServerToClientGoodbye = 15,
};
