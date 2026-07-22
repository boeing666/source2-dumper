#pragma once

struct PostProcessingVignetteParameters_t  // sizeof 0x24, align 0x4 [trivial_dtor] (materialsystem2) {MGetKV3ClassDefaults}
{
    float32 m_flVignetteStrength; // offset 0x0, size 0x4, align 4
    Vector2D m_vCenter; // offset 0x4, size 0x8, align 4
    float32 m_flRadius; // offset 0xC, size 0x4, align 4
    float32 m_flRoundness; // offset 0x10, size 0x4, align 4
    float32 m_flFeather; // offset 0x14, size 0x4, align 4
    Vector m_vColorTint; // offset 0x18, size 0xC, align 4
};
