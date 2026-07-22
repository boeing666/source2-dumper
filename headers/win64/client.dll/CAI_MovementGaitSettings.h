#pragma once

class CAI_MovementGaitSettings  // sizeof 0xC0, align 0x8 (client) {MGetKV3ClassDefaults}
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
    char _pad_0074[0x4]; // offset 0x74
    AI_MovementHeadingSettings_t m_heading; // offset 0x78, size 0x28, align 8 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flMaxIdleTurnScaleUp; // offset 0xA0, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flMovementPlantedTurnAngleThreshold; // offset 0xA4, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr MPropertyDescription
    float32 m_flBashStartDistance; // offset 0xA8, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flMinBashDelay; // offset 0xAC, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    CRangeFloat m_flMantleDelayRange; // offset 0xB0, size 0x8, align 255 | MPropertyGroupName MPropertySuppressExpr
    float32 m_flMantleStartDistance; // offset 0xB8, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    bool m_bEnabled; // offset 0xBC, size 0x1, align 1 | MPropertyFlattenIntoParentRow
    char _pad_00BD[0x3]; // offset 0xBD
};
