#pragma once

enum EPrivateCoachingSessionMemberFlag : uint32_t  // sizeof 0x4
{
    k_EPrivateCoachingSessionMemberFlag_Requester = 1,
    k_EPrivateCoachingSessionMemberFlag_Coach = 2,
    k_EPrivateCoachingSessionMemberFlag_LeftSession = 4,
};
