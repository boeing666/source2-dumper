#pragma once

struct OverworldSplineInfo_t  // sizeof 0x10, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flStartTangent; // offset 0x0, size 0x4, align 4
    float32 m_flEndTangent; // offset 0x4, size 0x4, align 4
    float32 m_flStartOffset; // offset 0x8, size 0x4, align 4
    float32 m_flEndOffset; // offset 0xC, size 0x4, align 4
};
