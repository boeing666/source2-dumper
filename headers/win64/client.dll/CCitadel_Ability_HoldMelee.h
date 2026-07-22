#pragma once

class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base /*0x0*/  // sizeof 0x1358, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12E8]; // offset 0x0
    GameTime_t m_flStateStartTime; // offset 0x12E8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDashStartTime; // offset 0x12EC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    EMeleeHold_AttackState m_eCurrentAttackState; // offset 0x12F0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    EMeleeHold_AttackType m_eCurrentAttackType; // offset 0x12F4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vAirDashDir; // offset 0x12F8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bAttackStartedWhileSliding; // offset 0x1304, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1305[0x3]; // offset 0x1305
    GameTime_t m_flLightChainEndTime; // offset 0x1308, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nLightChainCount; // offset 0x130C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bCreatedChargeEffects; // offset 0x1310, size 0x1, align 1
    char _pad_1311[0x3]; // offset 0x1311
    QAngle m_angForced; // offset 0x1314, size 0xC, align 4
    Vector m_vGoalDir; // offset 0x1320, size 0xC, align 4
    char _pad_132C[0x2C]; // offset 0x132C
};
