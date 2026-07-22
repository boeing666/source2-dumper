#pragma once

class CBaseDashCastAbilityVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CSubclassName< 4 > m_AbilityToTrigger; // offset 0x1818, size 0x10, align 8
    float32 m_flDashCastTriggerRadius; // offset 0x1828, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSpeed; // offset 0x182C, size 0x4, align 4 | MPropertyDescription
    bool m_bSnapToZeroSpeedOnEnd; // offset 0x1830, size 0x1, align 1 | MPropertyDescription
    bool m_bUseCurveToDefineSpeed; // offset 0x1831, size 0x1, align 1 | MPropertyDescription
    char _pad_1832[0x6]; // offset 0x1832
    CPiecewiseCurve m_MovementSpeedCurve; // offset 0x1838, size 0x40, align 8 | MPropertySuppressExpr
    float32 m_flMovementSpeedCurveAvgSpeed; // offset 0x1878, size 0x4, align 4 | MPropertySuppressField
    char _pad_187C[0x4]; // offset 0x187C
    CSoundEventName m_strTargetHitSound; // offset 0x1880, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strMissSound; // offset 0x1890, size 0x10, align 8 | MPropertyDescription
};
