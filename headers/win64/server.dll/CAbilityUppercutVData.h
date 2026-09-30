#pragma once

class CAbilityUppercutVData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x1940, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13D0]; // offset 0x0
    AttackData_t m_UppercutAttackData; // offset 0x13D0, size 0x530, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // offset 0x1900, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1910, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // offset 0x1920, size 0x10, align 8
    float32 m_flMaxPitchUp; // offset 0x1930, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageTriggerTime; // offset 0x1934, size 0x4, align 4
    float32 m_flMeleeLockoutDuration; // offset 0x1938, size 0x4, align 4
    char _pad_193C[0x4]; // offset 0x193C
};
