#pragma once

enum WeaponSwitchReason_t : uint32_t  // sizeof 0x4
{
    eDrawn = 0,
    eEquipped = 1,
    eUserInitiatedSwitchToLast = 2,
    eUserInitiatedUIKeyPress = 3,
};
