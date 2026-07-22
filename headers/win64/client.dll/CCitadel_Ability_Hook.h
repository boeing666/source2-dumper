#pragma once

class CCitadel_Ability_Hook : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1710, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hHookVictim; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vecHookTargetStartPos; // offset 0x11DC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flCancelHookTime; // offset 0x11E8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flBeginReelHookTime; // offset 0x11EC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flBulletShouldExpireTime; // offset 0x11F0, size 0x4, align 255 | MNetworkEnable
    char _pad_11F4[0x8]; // offset 0x11F4
    float32 m_flMaxHookTravelTime; // offset 0x11FC, size 0x4, align 4
    char _pad_1200[0x510]; // offset 0x1200
};
