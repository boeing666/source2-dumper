#pragma once

class CCitadel_Ability_Baba_BenchMelee : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    EBabaBenchMeleeState m_eState; // offset 0x16E0, size 0x1, align 1
    EBabaBenchMeleeAttackType m_eAttackType; // offset 0x16E1, size 0x1, align 1
    char _pad_16E2[0x2]; // offset 0x16E2
    GameTime_t m_flStateStartTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_flCommitTime; // offset 0x16E8, size 0x4, align 255
    GameTime_t m_flAttackTriggeredTime; // offset 0x16EC, size 0x4, align 255
    GameTime_t m_flNextLightAttackAllowedTime; // offset 0x16F0, size 0x4, align 255
    GameTime_t m_flNextHeavyAttackAllowedTime; // offset 0x16F4, size 0x4, align 255
    Vector m_vDashDir; // offset 0x16F8, size 0xC, align 4
    bool m_bDiveApplied; // offset 0x1704, size 0x1, align 1
    char _pad_1705[0x3]; // offset 0x1705
    Vector m_vDashStartVelocity; // offset 0x1708, size 0xC, align 4
    bool m_bAttackImpulseApplied; // offset 0x1714, size 0x1, align 1
    char _pad_1715[0x3]; // offset 0x1715
    int32 m_nAirborneAttackImpulses; // offset 0x1718, size 0x4, align 4
    QAngle m_angForced; // offset 0x171C, size 0xC, align 4
    char _pad_1728[0x190]; // offset 0x1728
};
