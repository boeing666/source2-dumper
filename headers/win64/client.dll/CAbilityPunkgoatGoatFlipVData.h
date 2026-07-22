#pragma once

class CAbilityPunkgoatGoatFlipVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CPiecewiseCurve m_ChargingSpeedCurve; // offset 0x1818, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoingUpSpeedCurve; // offset 0x1858, size 0x40, align 8
    float32 m_flGroundBreakOffAngle; // offset 0x1898, size 0x4, align 4
    char _pad_189C[0x4]; // offset 0x189C
    CEmbeddedSubclass< CCitadelModifier > m_Charging; // offset 0x18A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GoatGoingUp; // offset 0x18B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageBuff; // offset 0x18C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpowerMelee; // offset 0x18D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LingeringAirControl; // offset 0x18E0, size 0x10, align 8
    float32 m_flDelayBeforeCasterRegainsControlAfterFlip; // offset 0x18F0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_18F4[0x4]; // offset 0x18F4
};
