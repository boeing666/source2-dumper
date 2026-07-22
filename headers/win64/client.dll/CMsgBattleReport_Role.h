#pragma once

enum CMsgBattleReport_Role : uint32_t  // sizeof 0x4
{
    k_eUnknownRole = -1,
    k_eSafelane = 0,
    k_eMidlane = 1,
    k_eOfflane = 2,
    k_eSupport = 3,
    k_eHardSupport = 4,
};
