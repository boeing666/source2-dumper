#pragma once

struct CitadelCameraOperationDef_t  // sizeof 0xA0, align 0xFF [vtable abstract trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CameraOperation m_eCameraOperation; // offset 0x8, size 0x4, align 4
    bool m_bValuesAreRelative; // offset 0xC, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_000D[0x3]; // offset 0xD
    float32 m_flDelay; // offset 0x10, size 0x4, align 4
    float32 m_flMaintainDuration; // offset 0x14, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flApproachSpeed; // offset 0x18, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flApproachAcceleration; // offset 0x1C, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flApproachMinDuration; // offset 0x20, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flApproachTarget; // offset 0x24, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    Vector m_vApproachTarget; // offset 0x28, size 0xC, align 4 | MPropertySuppressExpr MPropertyDescription
    bool m_bApproachDefault; // offset 0x34, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_0035[0x3]; // offset 0x35
    float32 m_flSpringStrength; // offset 0x38, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flSpringMinSpeed; // offset 0x3C, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flSpringMaxDuration; // offset 0x40, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    bool m_bSpringToDefault; // offset 0x44, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_0045[0x3]; // offset 0x45
    float32 m_flSpringTarget; // offset 0x48, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    Vector m_vSpringTarget; // offset 0x4C, size 0xC, align 4 | MPropertySuppressExpr MPropertyDescription
    bool m_bLerpStartAtCurrent; // offset 0x58, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    bool m_bLerpEndAtDefault; // offset 0x59, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_005A[0x2]; // offset 0x5A
    float32 m_flLerpStart; // offset 0x5C, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flLerpEnd; // offset 0x60, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    Vector m_vLerpStart; // offset 0x64, size 0xC, align 4 | MPropertySuppressExpr MPropertyDescription
    Vector m_vLerpEnd; // offset 0x70, size 0xC, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flLerpBias; // offset 0x7C, size 0x4, align 4 | MPropertySuppressExpr MPropertyAttributeRange MPropertyDescription
    float32 m_flLerpGain; // offset 0x80, size 0x4, align 4 | MPropertySuppressExpr MPropertyAttributeRange MPropertyDescription
    float32 m_flLerpDuration; // offset 0x84, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flLagMinDuration; // offset 0x88, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flLagTime; // offset 0x8C, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flLagMaxSpeed; // offset 0x90, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flLagSpringStrength; // offset 0x94, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    bool m_bIncreaseSpringStrengthToKeepTargetOnScreen; // offset 0x98, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_0099[0x7]; // offset 0x99
};
