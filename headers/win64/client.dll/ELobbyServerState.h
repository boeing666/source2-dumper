#pragma once

enum ELobbyServerState : uint32_t  // sizeof 0x4
{
    k_eLobbyServerState_Assign = 0,
    k_eLobbyServerState_InGame = 1,
    k_eLobbyServerState_PostMatch = 2,
    k_eLobbyServerState_SignedOut = 3,
    k_eLobbyServerState_Abandoned = 4,
};
