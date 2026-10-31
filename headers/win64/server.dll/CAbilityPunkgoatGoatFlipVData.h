#pragma once

class CAbilityPunkgoatGoatFlipVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1170, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CPiecewiseCurve m_ChargingSpeedCurve; // offset 0x1080, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_GoingUpSpeedCurve; // offset 0x10C0, size 0x40, align 8
    float32 m_flGroundBreakOffAngle; // offset 0x1100, size 0x4, align 4
    char _pad_1104[0x4]; // offset 0x1104
    CEmbeddedSubclass< CCitadelModifier > m_Charging; // offset 0x1108, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GoatGoingUp; // offset 0x1118, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageBuff; // offset 0x1128, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MaxHealthBuff; // offset 0x1138, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpowerMelee; // offset 0x1148, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LingeringAirControl; // offset 0x1158, size 0x10, align 8
    float32 m_flDelayBeforeCasterRegainsControlAfterFlip; // offset 0x1168, size 0x4, align 4 | MPropertyStartGroup
    char _pad_116C[0x4]; // offset 0x116C
};
