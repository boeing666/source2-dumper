#pragma once

enum DOTALobbyReadyState : uint32_t  // sizeof 0x4
{
    DOTALobbyReadyState_UNDECLARED = 0,
    DOTALobbyReadyState_ACCEPTED = 1,
    DOTALobbyReadyState_DECLINED = 2,
    DOTALobbyReadyState_DECLINED_REQUEUE = 3,
};
