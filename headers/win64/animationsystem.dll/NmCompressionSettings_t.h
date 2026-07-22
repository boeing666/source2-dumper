#pragma once

struct NmCompressionSettings_t  // sizeof 0x40, align 0x10 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeX; // offset 0x0, size 0x8, align 4
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeY; // offset 0x8, size 0x8, align 4
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ; // offset 0x10, size 0x8, align 4
    NmCompressionSettings_t::QuantizationRange_t m_scaleRange; // offset 0x18, size 0x8, align 4
    Quaternion m_constantRotation; // offset 0x20, size 0x10, align 16
    bool m_bIsRotationStatic; // offset 0x30, size 0x1, align 1
    bool m_bIsTranslationStatic; // offset 0x31, size 0x1, align 1
    bool m_bIsScaleStatic; // offset 0x32, size 0x1, align 1
    char _pad_0033[0xD]; // offset 0x33
};
