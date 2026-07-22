#pragma once

enum ECraftworksAuditAction : uint32_t  // sizeof 0x4
{
    k_eInvalid = 0,
    k_eRecipeCrafted = 1,
    k_eMatchRewards = 2,
    k_eMatchRewardsTurbo = 3,
};
