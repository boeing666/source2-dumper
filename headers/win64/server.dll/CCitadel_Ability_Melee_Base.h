#pragma once

class CCitadel_Ability_Melee_Base : public CCitadelBaseAbility /*0x0*/  // sizeof 0x10A0, align 0xFF [vtable abstract] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF88]; // offset 0x0
    int32 m_nHitNumber; // offset 0xF88, size 0x4, align 4
    int32 m_nPlayerKillNumber; // offset 0xF8C, size 0x4, align 4
    bool m_bUsingThisMelee; // offset 0xF90, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bUsingMeleeTagActive; // offset 0xF91, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bHitWithThisAttack; // offset 0xF92, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F93[0x1]; // offset 0xF93
    GameTime_t m_flLastActivateTime; // offset 0xF94, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextAttackAllowedTime; // offset 0xF98, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAttackTriggeredTime; // offset 0xF9C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0FA0[0x100]; // offset 0xFA0
};
