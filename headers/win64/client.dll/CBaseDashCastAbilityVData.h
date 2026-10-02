#pragma once

class CBaseDashCastAbilityVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1470, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CSubclassName< 4 > m_AbilityToTrigger; // offset 0x13E8, size 0x10, align 8
    float32 m_flDashCastTriggerRadius; // offset 0x13F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSpeed; // offset 0x13FC, size 0x4, align 4 | MPropertyDescription
    bool m_bSnapToZeroSpeedOnEnd; // offset 0x1400, size 0x1, align 1 | MPropertyDescription
    bool m_bUseCurveToDefineSpeed; // offset 0x1401, size 0x1, align 1 | MPropertyDescription
    char _pad_1402[0x6]; // offset 0x1402
    CPiecewiseCurve m_MovementSpeedCurve; // offset 0x1408, size 0x40, align 8 | MPropertySuppressExpr
    float32 m_flMovementSpeedCurveAvgSpeed; // offset 0x1448, size 0x4, align 4 | MPropertySuppressField
    char _pad_144C[0x4]; // offset 0x144C
    CSoundEventName m_strTargetHitSound; // offset 0x1450, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strMissSound; // offset 0x1460, size 0x10, align 8 | MPropertyDescription
};
