#pragma once

class CAI_MovementGaitSettings  // sizeof 0xB0, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CRangeFloat m_speedRange; // offset 0x0, size 0x8, align 255 | MPropertySortPriority MPropertyFriendlyName MPropertySuppressExpr
    CRangeFloat m_stopDistanceRange; // offset 0x8, size 0x8, align 255 | MPropertySortPriority MPropertySuppressExpr
    CRangeFloat m_hopDistanceRange; // offset 0x10, size 0x8, align 255 | MPropertySortPriority MPropertySuppressExpr
    float32 m_flPreferredSpeed; // offset 0x18, size 0x4, align 4 | MPropertySortPriority MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flStartDistance; // offset 0x1C, size 0x4, align 4 | MPropertySortPriority MPropertySuppressExpr
    float32 m_flMinTurnRadius; // offset 0x20, size 0x4, align 4 | MPropertySortPriority MPropertyFriendlyName MPropertySuppressExpr
    CBitVecEnum< MovementCapability_t > m_capabilities; // offset 0x24, size 0x4, align 4 | MPropertySortPriority MPropertySuppressExpr
    float32 m_flAcceleration; // offset 0x28, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flDeceleration; // offset 0x2C, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    CPiecewiseCurve m_decelerationCurve; // offset 0x30, size 0x40, align 8 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flProceduralIdleTurnSpeed; // offset 0x70, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    AI_StrafeMode_t m_eStrafeMode; // offset 0x74, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flStrafeTransitionAimLeftHysteresis; // offset 0x78, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr MPropertyDescription
    float32 m_flStrafeTransitionAimRightHysteresis; // offset 0x7C, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr MPropertyDescription
    float32 m_flStrafeTransitionMinPathLength; // offset 0x80, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr MPropertyDescription
    float32 m_flMaxIdleTurnScaleUp; // offset 0x84, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flMovementPlantedTurnAngleThreshold; // offset 0x88, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr MPropertyDescription
    float32 m_flBashStartDistance; // offset 0x8C, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flMinBashDelay; // offset 0x90, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    CRangeFloat m_flMantleDelayRange; // offset 0x94, size 0x8, align 255 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flMantleStartDistance; // offset 0x9C, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flLeanCalculationLookAheadDistance; // offset 0xA0, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flLeanSmoothingFactor; // offset 0xA4, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr MPropertyDescription
    bool m_bEnabled; // offset 0xA8, size 0x1, align 1 | MPropertyFlattenIntoParentRow
    char _pad_00A9[0x7]; // offset 0xA9
};
