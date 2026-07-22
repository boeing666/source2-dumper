#pragma once

enum CMsgBattleReport_CompareContext : uint32_t  // sizeof 0x4
{
    k_eCompareContextInvalid = -1,
    k_eAbsoluteValue = 0,
    k_ePlayersOfSimilarRank = 1,
    k_eAllPlayers = 2,
    k_ePlayersPersonalHistory = 3,
};
