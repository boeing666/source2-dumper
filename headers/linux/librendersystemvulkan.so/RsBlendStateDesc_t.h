#pragma once

struct RsBlendStateDesc_t  // sizeof 0x20, align 0xFF [trivial_dtor] (rendersystemvulkan)
{
    uint32 m_srcBlendBits; // offset 0x0, size 0x4, align 4
    uint32_t m_blendOpBits : 30; // offset 0x0
    uint8_t m_bAlphaToCoverageEnable : 1; // offset 0x0
    uint8_t m_bIndependentBlendEnable : 1; // offset 0x0
    uint32 m_destBlendBits; // offset 0x4, size 0x4, align 4
    uint32 m_srcBlendAlphaBits; // offset 0x8, size 0x4, align 4
    uint32 m_destBlendAlphaBits; // offset 0xC, size 0x4, align 4
    uint32 m_renderTargetWriteMaskBits; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    uint32 m_blendOpAlphaBits; // offset 0x18, size 0x4, align 4
    uint8 m_blendEnableBits; // offset 0x1C, size 0x1, align 1
    uint8 m_srgbWriteEnableBits; // offset 0x1D, size 0x1, align 1
    char _pad_001E[0x2]; // offset 0x1E
};
