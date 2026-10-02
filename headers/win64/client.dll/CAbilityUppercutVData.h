#pragma once

class CAbilityUppercutVData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x19A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1418]; // offset 0x0
    AttackData_t m_UppercutAttackData; // offset 0x1418, size 0x548, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // offset 0x1960, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1970, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // offset 0x1980, size 0x10, align 8
    float32 m_flMaxPitchUp; // offset 0x1990, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageTriggerTime; // offset 0x1994, size 0x4, align 4
    float32 m_flMeleeLockoutDuration; // offset 0x1998, size 0x4, align 4
    char _pad_199C[0x4]; // offset 0x199C
};
