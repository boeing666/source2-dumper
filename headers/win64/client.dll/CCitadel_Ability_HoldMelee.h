#pragma once

class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base /*0x0*/  // sizeof 0x18C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1848]; // offset 0x0
    GameTime_t m_flStateStartTime; // offset 0x1848, size 0x4, align 255
    GameTime_t m_flDashStartTime; // offset 0x184C, size 0x4, align 255
    EMeleeHold_AttackState m_eCurrentAttackState; // offset 0x1850, size 0x4, align 4
    EMeleeHold_AttackType m_eCurrentAttackType; // offset 0x1854, size 0x4, align 4
    Vector m_vAirDashDir; // offset 0x1858, size 0xC, align 4
    bool m_bAttackStartedWhileSliding; // offset 0x1864, size 0x1, align 1
    char _pad_1865[0x3]; // offset 0x1865
    GameTime_t m_flLightChainEndTime; // offset 0x1868, size 0x4, align 255
    int32 m_nLightChainCount; // offset 0x186C, size 0x4, align 4
    bool m_bCreatedChargeEffects; // offset 0x1870, size 0x1, align 1
    char _pad_1871[0x3]; // offset 0x1871
    QAngle m_angForced; // offset 0x1874, size 0xC, align 4
    Vector m_vGoalDir; // offset 0x1880, size 0xC, align 4
    char _pad_188C[0x3C]; // offset 0x188C
};
