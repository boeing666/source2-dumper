#pragma once

class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base /*0x0*/  // sizeof 0x16A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1638]; // offset 0x0
    GameTime_t m_flStateStartTime; // offset 0x1638, size 0x4, align 255
    GameTime_t m_flDashStartTime; // offset 0x163C, size 0x4, align 255
    EMeleeHold_AttackState m_eCurrentAttackState; // offset 0x1640, size 0x4, align 4
    EMeleeHold_AttackType m_eCurrentAttackType; // offset 0x1644, size 0x4, align 4
    Vector m_vAirDashDir; // offset 0x1648, size 0xC, align 4
    bool m_bAttackStartedWhileSliding; // offset 0x1654, size 0x1, align 1
    char _pad_1655[0x3]; // offset 0x1655
    GameTime_t m_flLightChainEndTime; // offset 0x1658, size 0x4, align 255
    int32 m_nLightChainCount; // offset 0x165C, size 0x4, align 4
    bool m_bCreatedChargeEffects; // offset 0x1660, size 0x1, align 1
    char _pad_1661[0x3]; // offset 0x1661
    QAngle m_angForced; // offset 0x1664, size 0xC, align 4
    Vector m_vGoalDir; // offset 0x1670, size 0xC, align 4
    char _pad_167C[0x2C]; // offset 0x167C
};
