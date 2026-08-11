#pragma once

class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    GameTime_t m_flStateStartTime; // offset 0x10A0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDashStartTime; // offset 0x10A4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    EMeleeHold_AttackState m_eCurrentAttackState; // offset 0x10A8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    EMeleeHold_AttackType m_eCurrentAttackType; // offset 0x10AC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vAirDashDir; // offset 0x10B0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bAttackStartedWhileSliding; // offset 0x10BC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_10BD[0x3]; // offset 0x10BD
    GameTime_t m_flLightChainEndTime; // offset 0x10C0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nLightChainCount; // offset 0x10C4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bCreatedChargeEffects; // offset 0x10C8, size 0x1, align 1
    char _pad_10C9[0x3]; // offset 0x10C9
    QAngle m_angForced; // offset 0x10CC, size 0xC, align 4
    Vector m_vGoalDir; // offset 0x10D8, size 0xC, align 4
    char _pad_10E4[0x1C]; // offset 0x10E4
};
