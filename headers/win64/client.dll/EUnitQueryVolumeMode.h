#pragma once

enum EUnitQueryVolumeMode : uint8_t  // sizeof 0x1
{
    k_eUnitQueryVolume_None = 0,
    k_eUnitQueryVolume_LimitRadius = 1,
    k_eUnitQueryVolume_Override = 2,
};
