#pragma once

class CParticleVisibilityInputs  // sizeof 0x48, align 0x4 [trivial_dtor] (particles) {MGetKV3ClassDefaults}
{
public:
    float32 m_flCameraBias; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPin; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flProxyRadius; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flInputMin; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flInputMax; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flInputPixelVisFade; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flNoPixelVisibilityFallback; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flDistanceInputMin; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flDistanceInputMax; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flDotInputMin; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flDotInputMax; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDotCPAngles; // offset 0x2C, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDotCameraAngles; // offset 0x2D, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_002E[0x2]; // offset 0x2E
    float32 m_flAlphaScaleMin; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flAlphaScaleMax; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flRadiusScaleMin; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flRadiusScaleMax; // offset 0x3C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flRadiusScaleFOVBase; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRightEye; // offset 0x44, size 0x1, align 1 | MPropertyFriendlyName MParticleAdvancedField
    char _pad_0045[0x3]; // offset 0x45
};
