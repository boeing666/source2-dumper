#pragma once

class CCitadel_Ability_Baba_BenchMelee : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1688, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14B8]; // offset 0x0
    EBabaBenchMeleeState m_eState; // offset 0x14B8, size 0x1, align 1
    EBabaBenchMeleeAttackType m_eAttackType; // offset 0x14B9, size 0x1, align 1
    char _pad_14BA[0x2]; // offset 0x14BA
    GameTime_t m_flStateStartTime; // offset 0x14BC, size 0x4, align 255
    GameTime_t m_flCommitTime; // offset 0x14C0, size 0x4, align 255
    GameTime_t m_flAttackTriggeredTime; // offset 0x14C4, size 0x4, align 255
    GameTime_t m_flNextLightAttackAllowedTime; // offset 0x14C8, size 0x4, align 255
    GameTime_t m_flNextHeavyAttackAllowedTime; // offset 0x14CC, size 0x4, align 255
    Vector m_vDashDir; // offset 0x14D0, size 0xC, align 4
    bool m_bDiveApplied; // offset 0x14DC, size 0x1, align 1
    char _pad_14DD[0x3]; // offset 0x14DD
    Vector m_vDashStartVelocity; // offset 0x14E0, size 0xC, align 4
    bool m_bAttackImpulseApplied; // offset 0x14EC, size 0x1, align 1
    char _pad_14ED[0x3]; // offset 0x14ED
    QAngle m_angForced; // offset 0x14F0, size 0xC, align 4
    char _pad_14FC[0x18C]; // offset 0x14FC
};
