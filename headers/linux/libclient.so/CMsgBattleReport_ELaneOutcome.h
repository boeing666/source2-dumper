#pragma once

enum CMsgBattleReport_ELaneOutcome : uint32_t  // sizeof 0x4
{
    k_eUnknownLaneOutcome = -1,
    k_eWonLane = 0,
    k_eLostLane = 1,
    k_eEvenLane = 2,
};
