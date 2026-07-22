#pragma once

enum ELobbyMemberCoachRequestState : uint32_t  // sizeof 0x4
{
    k_eLobbyMemberCoachRequestState_None = 0,
    k_eLobbyMemberCoachRequestState_Accepted = 1,
    k_eLobbyMemberCoachRequestState_Rejected = 2,
};
