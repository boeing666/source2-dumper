#pragma once

struct GlitchSettings_t  // sizeof 0x2C, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flStrength; // offset 0x0, size 0x4, align 4
    int32 m_nQuantizeType; // offset 0x4, size 0x4, align 4
    float32 m_flQuantizeScale; // offset 0x8, size 0x4, align 4
    float32 m_flQuantizeStrength; // offset 0xC, size 0x4, align 4
    float32 m_flFrameRate; // offset 0x10, size 0x4, align 4
    float32 m_flSpeed; // offset 0x14, size 0x4, align 4
    float32 m_flJumpStrength; // offset 0x18, size 0x4, align 4
    float32 m_flDistortStrength; // offset 0x1C, size 0x4, align 4
    float32 m_flWhiteNoiseStrength; // offset 0x20, size 0x4, align 4
    float32 m_flScanlineStrength; // offset 0x24, size 0x4, align 4
    float32 m_flBreakupStrength; // offset 0x28, size 0x4, align 4
};
