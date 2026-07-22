#pragma once

struct RsRasterizerStateDesc_t  // sizeof 0x10, align 0xFF [trivial_dtor] (rendersystemdx11)
{
    RsFillMode_t m_nFillMode; // offset 0x0, size 0x1, align 1
    RsCullMode_t m_nCullMode; // offset 0x1, size 0x1, align 1
    bool m_bDepthClipEnable; // offset 0x2, size 0x1, align 1
    bool m_bMultisampleEnable; // offset 0x3, size 0x1, align 1
    int32 m_nDepthBias; // offset 0x4, size 0x4, align 4
    float32 m_flDepthBiasClamp; // offset 0x8, size 0x4, align 4
    float32 m_flSlopeScaledDepthBias; // offset 0xC, size 0x4, align 4
};
