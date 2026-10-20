#pragma once

class CCitadel_Ability_Baba_BenchMelee : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1698, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    EBabaBenchMeleeState m_eState; // offset 0x14C0, size 0x1, align 1
    EBabaBenchMeleeAttackType m_eAttackType; // offset 0x14C1, size 0x1, align 1
    char _pad_14C2[0x2]; // offset 0x14C2
    GameTime_t m_flStateStartTime; // offset 0x14C4, size 0x4, align 255
    GameTime_t m_flCommitTime; // offset 0x14C8, size 0x4, align 255
    GameTime_t m_flAttackTriggeredTime; // offset 0x14CC, size 0x4, align 255
    GameTime_t m_flNextLightAttackAllowedTime; // offset 0x14D0, size 0x4, align 255
    GameTime_t m_flNextHeavyAttackAllowedTime; // offset 0x14D4, size 0x4, align 255
    Vector m_vDashDir; // offset 0x14D8, size 0xC, align 4
    bool m_bDiveApplied; // offset 0x14E4, size 0x1, align 1
    char _pad_14E5[0x3]; // offset 0x14E5
    Vector m_vDashStartVelocity; // offset 0x14E8, size 0xC, align 4
    bool m_bAttackImpulseApplied; // offset 0x14F4, size 0x1, align 1
    char _pad_14F5[0x3]; // offset 0x14F5
    int32 m_nAirborneAttackImpulses; // offset 0x14F8, size 0x4, align 4
    QAngle m_angForced; // offset 0x14FC, size 0xC, align 4
    char _pad_1508[0x190]; // offset 0x1508
};
