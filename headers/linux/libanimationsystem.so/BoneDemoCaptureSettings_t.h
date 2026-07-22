#pragma once

struct BoneDemoCaptureSettings_t  // sizeof 0x20, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
    CUtlString m_boneName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flErrorSplineRotationMax; // offset 0x8, size 0x4, align 4 | MPropertySuppressField
    float32 m_flErrorSplineTranslationMax; // offset 0xC, size 0x4, align 4 | MPropertySuppressField
    float32 m_flErrorSplineScaleMax; // offset 0x10, size 0x4, align 4 | MPropertySuppressField
    float32 m_flErrorQuantizationRotationMax; // offset 0x14, size 0x4, align 4 | MPropertySuppressField
    float32 m_flErrorQuantizationTranslationMax; // offset 0x18, size 0x4, align 4 | MPropertySuppressField
    float32 m_flErrorQuantizationScaleMax; // offset 0x1C, size 0x4, align 4 | MPropertySuppressField
};
