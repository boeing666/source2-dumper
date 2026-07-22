#pragma once

enum EArtyTeam : uint8_t  // sizeof 0x1
{
    k_eNoTeam = 0,
    k_eYou = 1,
    k_eThem = 2,
    k_eNeutral = 4,
    k_ePlayers = 3,
    k_eAllTeams = 255,
};
