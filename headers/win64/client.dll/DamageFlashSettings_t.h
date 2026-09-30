#pragma once

struct DamageFlashSettings_t  // sizeof 0xD8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    float32 m_flDuration; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CColorGradient m_ColorGradient; // offset 0x8, size 0x18, align 8 | MPropertyAttributeEditor
    CRangeFloat m_flBrightness; // offset 0x20, size 0x8, align 255
    CRangeFloat m_flBrightnessInLightSensitivityMode; // offset 0x28, size 0x8, align 255
    bool m_bAnimateAlpha; // offset 0x30, size 0x1, align 1
    bool m_bFlashHit; // offset 0x31, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0032[0x2]; // offset 0x32
    CRangeFloat m_flFlashHitScale; // offset 0x34, size 0x8, align 255 | MPropertySuppressExpr
    CRangeFloat m_flFlashHitRotation; // offset 0x3C, size 0x8, align 255 | MPropertySuppressExpr
    bool m_bFlashHitAnimateRadius; // offset 0x44, size 0x1, align 1 | MPropertySuppressExpr
    bool m_bFlashHitSpikes; // offset 0x45, size 0x1, align 1 | MPropertyStartGroup MPropertySuppressExpr
    char _pad_0046[0x2]; // offset 0x46
    CRangeInt m_nSpikeCount; // offset 0x48, size 0x8, align 255 | MPropertySuppressExpr
    CRangeFloat m_flSpikeSharpness; // offset 0x50, size 0x8, align 255 | MPropertySuppressExpr
    CPiecewiseCurve m_AlphaAnimationCurve; // offset 0x58, size 0x40, align 8 | MPropertyStartGroup MPropertySuppressExpr
    CPiecewiseCurve m_RadiusScaleAnimationCurve; // offset 0x98, size 0x40, align 8 | MPropertySuppressExpr
};
