#pragma once

class CCitadel_Ability_Hook : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14A0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CBaseEntity > m_hHookVictim; // offset 0xF70, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vecHookTargetStartPos; // offset 0xF74, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flCancelHookTime; // offset 0xF80, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flBeginReelHookTime; // offset 0xF84, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flBulletShouldExpireTime; // offset 0xF88, size 0x4, align 255 | MNetworkEnable
    char _pad_0F8C[0x8]; // offset 0xF8C
    float32 m_flMaxHookTravelTime; // offset 0xF94, size 0x4, align 4
    float32 m_flLastUppercutRestoreTime; // offset 0xF98, size 0x4, align 4
    char _pad_0F9C[0x504]; // offset 0xF9C
};
