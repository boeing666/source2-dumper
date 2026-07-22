#pragma once

struct PostProcessingBloomParameters_t  // sizeof 0x88, align 0x4 [trivial_dtor] (materialsystem2) {MGetKV3ClassDefaults}
{
    BloomBlendMode_t m_blendMode; // offset 0x0, size 0x4, align 4
    float32 m_flBloomStrength; // offset 0x4, size 0x4, align 4
    float32 m_flScreenBloomStrength; // offset 0x8, size 0x4, align 4
    float32 m_flBlurBloomStrength; // offset 0xC, size 0x4, align 4
    float32 m_flBloomThreshold; // offset 0x10, size 0x4, align 4
    float32 m_flBloomThresholdWidth; // offset 0x14, size 0x4, align 4
    float32 m_flSkyboxBloomStrength; // offset 0x18, size 0x4, align 4
    float32 m_flBloomStartValue; // offset 0x1C, size 0x4, align 4
    float32 m_flComputeBloomStrength; // offset 0x20, size 0x4, align 4
    float32 m_flComputeBloomThreshold; // offset 0x24, size 0x4, align 4
    float32 m_flComputeBloomRadius; // offset 0x28, size 0x4, align 4
    float32 m_flComputeBloomEffectsScale; // offset 0x2C, size 0x4, align 4
    float32 m_flComputeBloomLensDirtStrength; // offset 0x30, size 0x4, align 4
    float32 m_flComputeBloomLensDirtBlackLevel; // offset 0x34, size 0x4, align 4
    float32[5] m_flBlurWeight; // offset 0x38, size 0x14, align 4
    Vector[5] m_vBlurTint; // offset 0x4C, size 0x3C, align 4
};
