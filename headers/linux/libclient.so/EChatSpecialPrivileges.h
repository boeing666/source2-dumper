#pragma once

enum EChatSpecialPrivileges : uint32_t  // sizeof 0x4
{
    k_EChatSpecialPrivileges_None = 0,
    k_EChatSpecialPrivileges_Moderator = 1,
    k_EChatSpecialPrivileges_SuperModerator = 2,
};
