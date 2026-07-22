#pragma once

struct PostProcessingLocalContrastParameters_t  // sizeof 0x14, align 0x4 [trivial_dtor] (resourcecompiler) {MGetKV3ClassDefaults}
{
    float32 m_flLocalContrastStrength; // offset 0x0, size 0x4, align 4
    float32 m_flLocalContrastEdgeStrength; // offset 0x4, size 0x4, align 4
    float32 m_flLocalContrastVignetteStart; // offset 0x8, size 0x4, align 4
    float32 m_flLocalContrastVignetteEnd; // offset 0xC, size 0x4, align 4
    float32 m_flLocalContrastVignetteBlur; // offset 0x10, size 0x4, align 4
};
