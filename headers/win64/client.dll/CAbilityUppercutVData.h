#pragma once

class CAbilityUppercutVData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x1DA8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1848]; // offset 0x0
    AttackData_t m_UppercutAttackData; // offset 0x1848, size 0x528, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // offset 0x1D70, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1D80, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // offset 0x1D90, size 0x10, align 8
    float32 m_flMaxPitchUp; // offset 0x1DA0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageTriggerTime; // offset 0x1DA4, size 0x4, align 4
};
