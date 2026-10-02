#pragma once

enum EPlantLeapPhase_t : uint8_t  // sizeof 0x1
{
    EPlantLeap_None = 0,
    EPlantLeap_Rising = 1,
    EPlantLeap_Hovering = 2,
    EPlantLeap_Slamming = 3,
};
