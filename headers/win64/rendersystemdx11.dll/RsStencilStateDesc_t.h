#pragma once

struct RsStencilStateDesc_t  // sizeof 0x6, align 0xFF [trivial_dtor] (rendersystemdx11)
{
    uint8_t m_frontStencilFunc : 4; // offset 0x0
    uint8_t m_backStencilFunc : 4; // offset 0x0
    uint8_t m_bStencilEnable : 1; // offset 0x0
    uint8_t m_frontStencilFailOp : 3; // offset 0x0
    uint8_t m_frontStencilDepthFailOp : 3; // offset 0x0
    uint8_t m_frontStencilPassOp : 3; // offset 0x0
    uint8_t m_backStencilFailOp : 3; // offset 0x0
    uint8_t m_backStencilDepthFailOp : 3; // offset 0x0
    uint8_t m_backStencilPassOp : 3; // offset 0x0
    char _pad_0001[0x3]; // offset 0x1
    uint8 m_nStencilReadMask; // offset 0x4, size 0x1, align 1
    uint8 m_nStencilWriteMask; // offset 0x5, size 0x1, align 1
};
