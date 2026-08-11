#pragma once

class CCitadel_Ability_FireBomb : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1318, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12F8]; // offset 0x0
    CCitadelAutoScaledTime m_flDetonateTime; // offset 0x12F8, size 0x18, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flStartTime; // offset 0x1310, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1314[0x4]; // offset 0x1314
};
