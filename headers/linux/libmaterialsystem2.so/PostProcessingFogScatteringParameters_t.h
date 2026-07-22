#pragma once

struct PostProcessingFogScatteringParameters_t  // sizeof 0x20, align 0x4 [trivial_dtor] (materialsystem2) {MGetKV3ClassDefaults}
{
    float32 m_fRadius; // offset 0x0, size 0x4, align 4
    float32 m_fScale; // offset 0x4, size 0x4, align 4
    float32 m_fCubemapScale; // offset 0x8, size 0x4, align 4
    float32 m_fVolumetricScale; // offset 0xC, size 0x4, align 4
    float32 m_fGradientScale; // offset 0x10, size 0x4, align 4
    float32 m_fWaterScale; // offset 0x14, size 0x4, align 4
    float32 m_fWaterDensity; // offset 0x18, size 0x4, align 4
    float32 m_fWaterDepthBlurRadius; // offset 0x1C, size 0x4, align 4
};
