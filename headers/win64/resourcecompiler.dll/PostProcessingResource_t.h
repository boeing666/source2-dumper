#pragma once

struct PostProcessingResource_t  // sizeof 0x158, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    bool m_bHasTonemapParams; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    PostProcessingTonemapParameters_t m_toneMapParams; // offset 0x4, size 0x3C, align 4
    bool m_bHasBloomParams; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x3]; // offset 0x41
    PostProcessingBloomParameters_t m_bloomParams; // offset 0x44, size 0x88, align 4
    bool m_bHasVignetteParams; // offset 0xCC, size 0x1, align 1
    char _pad_00CD[0x3]; // offset 0xCD
    PostProcessingVignetteParameters_t m_vignetteParams; // offset 0xD0, size 0x24, align 4
    bool m_bHasLocalContrastParams; // offset 0xF4, size 0x1, align 1
    char _pad_00F5[0x3]; // offset 0xF5
    PostProcessingLocalContrastParameters_t m_localConstrastParams; // offset 0xF8, size 0x14, align 4
    int32 m_nColorCorrectionVolumeDim; // offset 0x10C, size 0x4, align 4
    CUtlBinaryBlock m_colorCorrectionVolumeData; // offset 0x110, size 0x10, align 8
    bool m_bHasColorCorrection; // offset 0x120, size 0x1, align 1
    bool m_bHasFogScatteringParams; // offset 0x121, size 0x1, align 1
    char _pad_0122[0x2]; // offset 0x122
    PostProcessingFogScatteringParameters_t m_fogScatteringParams; // offset 0x124, size 0x20, align 4
    bool m_bHasLocalExposureParams; // offset 0x144, size 0x1, align 1
    char _pad_0145[0x3]; // offset 0x145
    PostProcessingLocalExposureParameters_t m_localExposureParams; // offset 0x148, size 0x10, align 4
};
