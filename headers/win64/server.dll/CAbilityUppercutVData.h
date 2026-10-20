#pragma once

class CAbilityUppercutVData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    AttackData_t m_UppercutAttackData; // offset 0x10A0, size 0x548, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // offset 0x15E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x15F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // offset 0x1608, size 0x10, align 8
    float32 m_flMaxPitchUp; // offset 0x1618, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageTriggerTime; // offset 0x161C, size 0x4, align 4
    float32 m_flMeleeLockoutDuration; // offset 0x1620, size 0x4, align 4
    char _pad_1624[0x4]; // offset 0x1624
};
