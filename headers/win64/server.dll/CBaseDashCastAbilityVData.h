#pragma once

class CBaseDashCastAbilityVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1108, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CSubclassName< 4 > m_AbilityToTrigger; // offset 0x1080, size 0x10, align 8
    float32 m_flDashCastTriggerRadius; // offset 0x1090, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSpeed; // offset 0x1094, size 0x4, align 4 | MPropertyDescription
    bool m_bSnapToZeroSpeedOnEnd; // offset 0x1098, size 0x1, align 1 | MPropertyDescription
    bool m_bUseCurveToDefineSpeed; // offset 0x1099, size 0x1, align 1 | MPropertyDescription
    char _pad_109A[0x6]; // offset 0x109A
    CPiecewiseCurve m_MovementSpeedCurve; // offset 0x10A0, size 0x40, align 8 | MPropertySuppressExpr
    float32 m_flMovementSpeedCurveAvgSpeed; // offset 0x10E0, size 0x4, align 4 | MPropertySuppressField
    char _pad_10E4[0x4]; // offset 0x10E4
    CSoundEventName m_strTargetHitSound; // offset 0x10E8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strMissSound; // offset 0x10F8, size 0x10, align 8 | MPropertyDescription
};
