#pragma once

struct PostProcessingLocalExposureParameters_t  // sizeof 0x10, align 0x4 [trivial_dtor] (materialsystem2) {MGetKV3ClassDefaults}
{
    float32 m_fShadowOffsetEV; // offset 0x0, size 0x4, align 4
    float32 m_fHighlightOffsetEV; // offset 0x4, size 0x4, align 4
    float32 m_fSigma; // offset 0x8, size 0x4, align 4
    float32 m_fBoostLocalContrast; // offset 0xC, size 0x4, align 4
};
