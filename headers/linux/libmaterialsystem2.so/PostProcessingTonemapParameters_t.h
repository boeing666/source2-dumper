#pragma once

struct PostProcessingTonemapParameters_t  // sizeof 0x3C, align 0x4 [trivial_dtor] (materialsystem2) {MGetKV3ClassDefaults}
{
    float32 m_flExposureBias; // offset 0x0, size 0x4, align 4
    float32 m_flShoulderStrength; // offset 0x4, size 0x4, align 4
    float32 m_flLinearStrength; // offset 0x8, size 0x4, align 4
    float32 m_flLinearAngle; // offset 0xC, size 0x4, align 4
    float32 m_flToeStrength; // offset 0x10, size 0x4, align 4
    float32 m_flToeNum; // offset 0x14, size 0x4, align 4
    float32 m_flToeDenom; // offset 0x18, size 0x4, align 4
    float32 m_flWhitePoint; // offset 0x1C, size 0x4, align 4
    float32 m_flLuminanceSource; // offset 0x20, size 0x4, align 4
    float32 m_flExposureBiasShadows; // offset 0x24, size 0x4, align 4
    float32 m_flExposureBiasHighlights; // offset 0x28, size 0x4, align 4
    float32 m_flMinShadowLum; // offset 0x2C, size 0x4, align 4
    float32 m_flMaxShadowLum; // offset 0x30, size 0x4, align 4
    float32 m_flMinHighlightLum; // offset 0x34, size 0x4, align 4
    float32 m_flMaxHighlightLum; // offset 0x38, size 0x4, align 4
};
