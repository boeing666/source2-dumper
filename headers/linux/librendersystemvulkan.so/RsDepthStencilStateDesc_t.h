#pragma once

struct RsDepthStencilStateDesc_t  // sizeof 0x8, align 0xFF [trivial_dtor] (rendersystemvulkan)
{
    uint8_t m_bDepthTestEnable : 1; // offset 0x0
    uint8_t m_bDepthWriteEnable : 1; // offset 0x0
    uint8_t m_depthFunc : 4; // offset 0x0
    char _pad_0001[0x1]; // offset 0x1
    RsStencilStateDesc_t m_stencilState; // offset 0x2, size 0x6, align 255
};
