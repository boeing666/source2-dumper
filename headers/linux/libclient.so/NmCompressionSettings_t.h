#pragma once

struct NmCompressionSettings_t  // sizeof 0x50, align 0x10 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeX; // offset 0x0, size 0x8, align 4
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeY; // offset 0x8, size 0x8, align 4
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ; // offset 0x10, size 0x8, align 4
    NmCompressionSettings_t::QuantizationRange_t m_scaleRange; // offset 0x18, size 0x8, align 4
    int32 m_nTrackReadOffset; // offset 0x20, size 0x4, align 4
    char _pad_0024[0xC]; // offset 0x24
    Quaternion m_constantRotation; // offset 0x30, size 0x10, align 16
    bool m_bIsRotationStatic; // offset 0x40, size 0x1, align 1
    bool m_bIsTranslationStatic; // offset 0x41, size 0x1, align 1
    bool m_bIsScaleStatic; // offset 0x42, size 0x1, align 1
    char _pad_0043[0xD]; // offset 0x43
};
