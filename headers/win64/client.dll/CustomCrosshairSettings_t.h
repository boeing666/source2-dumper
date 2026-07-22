#pragma once

struct CustomCrosshairSettings_t  // sizeof 0x44, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 m_nPipWidth; // offset 0x0, size 0x4, align 4
    int32 m_nPipHeight; // offset 0x4, size 0x4, align 4
    int32 m_nPipOutlineWidth; // offset 0x8, size 0x4, align 4
    int32 m_nPipOutlineGap; // offset 0xC, size 0x4, align 4
    float32 m_flPipOpacity; // offset 0x10, size 0x4, align 4
    float32 m_flPipOutlineOpacity; // offset 0x14, size 0x4, align 4
    Color m_PipColor; // offset 0x18, size 0x4, align 1
    Color m_PipOutlineColor; // offset 0x1C, size 0x4, align 1
    int32 m_nDotRadius; // offset 0x20, size 0x4, align 4
    int32 m_nDotOutlineWidth; // offset 0x24, size 0x4, align 4
    int32 m_nDotOutlineGap; // offset 0x28, size 0x4, align 4
    float32 m_flDotOpacity; // offset 0x2C, size 0x4, align 4
    float32 m_flDotOutlineOpacity; // offset 0x30, size 0x4, align 4
    Color m_DotColor; // offset 0x34, size 0x4, align 1
    Color m_DotOutlineColor; // offset 0x38, size 0x4, align 1
    CrosshairSpreadIndicatingElement m_SpreadIndicatingElement; // offset 0x3C, size 0x4, align 4
    float32 m_flBaseSpread; // offset 0x40, size 0x4, align 4
};
