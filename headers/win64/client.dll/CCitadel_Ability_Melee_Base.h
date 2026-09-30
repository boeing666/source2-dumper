#pragma once

class CCitadel_Ability_Melee_Base : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1848, align 0xFF [vtable abstract] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bUsingThisMelee; // offset 0x16D8, size 0x1, align 1
    bool m_bUsingMeleeTagActive; // offset 0x16D9, size 0x1, align 1
    bool m_bHitWithThisAttack; // offset 0x16DA, size 0x1, align 1
    char _pad_16DB[0x1]; // offset 0x16DB
    GameTime_t m_flLastActivateTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_flNextAttackAllowedTime; // offset 0x16E0, size 0x4, align 255
    GameTime_t m_flAttackTriggeredTime; // offset 0x16E4, size 0x4, align 255
    char _pad_16E8[0x160]; // offset 0x16E8
};
