#pragma once

enum AI_SensingFlags_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eBlind = 1,
    eDeaf = 2,
    eDisableAllSensing = 4,
    eCanSenseDead = 8,
};
