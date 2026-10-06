#pragma once

class CCitadel_Ability_Baba_BenchMelee : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x18B0, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    EBabaBenchMeleeState m_eState; // offset 0x16D8, size 0x1, align 1
    EBabaBenchMeleeAttackType m_eAttackType; // offset 0x16D9, size 0x1, align 1
    char _pad_16DA[0x2]; // offset 0x16DA
    GameTime_t m_flStateStartTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_flCommitTime; // offset 0x16E0, size 0x4, align 255
    GameTime_t m_flAttackTriggeredTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_flNextLightAttackAllowedTime; // offset 0x16E8, size 0x4, align 255
    GameTime_t m_flNextHeavyAttackAllowedTime; // offset 0x16EC, size 0x4, align 255
    Vector m_vDashDir; // offset 0x16F0, size 0xC, align 4
    bool m_bDiveApplied; // offset 0x16FC, size 0x1, align 1
    char _pad_16FD[0x3]; // offset 0x16FD
    Vector m_vDashStartVelocity; // offset 0x1700, size 0xC, align 4
    bool m_bAttackImpulseApplied; // offset 0x170C, size 0x1, align 1
    char _pad_170D[0x3]; // offset 0x170D
    QAngle m_angForced; // offset 0x1710, size 0xC, align 4
    char _pad_171C[0x194]; // offset 0x171C
};
