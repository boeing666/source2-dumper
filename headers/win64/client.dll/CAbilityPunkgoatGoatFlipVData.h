#pragma once

class CAbilityPunkgoatGoatFlipVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CPiecewiseCurve m_ChargingSpeedCurve; // offset 0x13A0, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoingUpSpeedCurve; // offset 0x13E0, size 0x40, align 8
    float32 m_flGroundBreakOffAngle; // offset 0x1420, size 0x4, align 4
    char _pad_1424[0x4]; // offset 0x1424
    CEmbeddedSubclass< CCitadelModifier > m_Charging; // offset 0x1428, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GoatGoingUp; // offset 0x1438, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageBuff; // offset 0x1448, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MaxHealthBuff; // offset 0x1458, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpowerMelee; // offset 0x1468, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LingeringAirControl; // offset 0x1478, size 0x10, align 8
    float32 m_flDelayBeforeCasterRegainsControlAfterFlip; // offset 0x1488, size 0x4, align 4 | MPropertyStartGroup
    char _pad_148C[0x4]; // offset 0x148C
};
