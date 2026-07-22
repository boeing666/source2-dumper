#pragma once

class CCitadel_WeaponUpgrade_BurstFire : public CCitadel_Item /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_nFastFireEndTime; // offset 0x11D8, size 0x4, align 255 | MNetworkEnable
    char _pad_11DC[0x84]; // offset 0x11DC
};
