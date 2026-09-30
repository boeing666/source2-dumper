#pragma once

class CCitadel_Ability_Melee_Base : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1630, align 0xFF [vtable abstract] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14B8]; // offset 0x0
    int32 m_nHitNumber; // offset 0x14B8, size 0x4, align 4
    int32 m_nPlayerKillNumber; // offset 0x14BC, size 0x4, align 4
    bool m_bUsingThisMelee; // offset 0x14C0, size 0x1, align 1
    bool m_bUsingMeleeTagActive; // offset 0x14C1, size 0x1, align 1
    bool m_bHitWithThisAttack; // offset 0x14C2, size 0x1, align 1
    char _pad_14C3[0x1]; // offset 0x14C3
    GameTime_t m_flLastActivateTime; // offset 0x14C4, size 0x4, align 255
    GameTime_t m_flNextAttackAllowedTime; // offset 0x14C8, size 0x4, align 255
    GameTime_t m_flAttackTriggeredTime; // offset 0x14CC, size 0x4, align 255
    char _pad_14D0[0x160]; // offset 0x14D0
};
