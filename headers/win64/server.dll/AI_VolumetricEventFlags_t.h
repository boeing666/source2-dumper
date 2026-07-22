#pragma once

enum AI_VolumetricEventFlags_t : uint16_t  // sizeof 0x2
{
    eNone = 0,
    eReactToSource = 1,
    eDangerApproach = 2,
    eAlliesOnly = 4,
    ePanicNPCs = 8,
    eSquadOnly = 16,
    eAggregatable = 32,
};
