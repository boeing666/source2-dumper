#pragma once

class CCitadel_Ability_Melee_Base : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x12E8, align 0xFF [vtable abstract] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bUsingThisMelee; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bUsingMeleeTagActive; // offset 0x11D9, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bHitWithThisAttack; // offset 0x11DA, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11DB[0x1]; // offset 0x11DB
    GameTime_t m_flLastActivateTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextAttackAllowedTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAttackTriggeredTime; // offset 0x11E4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_11E8[0x100]; // offset 0x11E8
};
