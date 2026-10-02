#pragma once

class CAbilityPunkgoatGoatFlipVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CPiecewiseCurve m_ChargingSpeedCurve; // offset 0x13E8, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoingUpSpeedCurve; // offset 0x1428, size 0x40, align 8
    float32 m_flGroundBreakOffAngle; // offset 0x1468, size 0x4, align 4
    char _pad_146C[0x4]; // offset 0x146C
    CEmbeddedSubclass< CCitadelModifier > m_Charging; // offset 0x1470, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GoatGoingUp; // offset 0x1480, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageBuff; // offset 0x1490, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MaxHealthBuff; // offset 0x14A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpowerMelee; // offset 0x14B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LingeringAirControl; // offset 0x14C0, size 0x10, align 8
    float32 m_flDelayBeforeCasterRegainsControlAfterFlip; // offset 0x14D0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_14D4[0x4]; // offset 0x14D4
};
