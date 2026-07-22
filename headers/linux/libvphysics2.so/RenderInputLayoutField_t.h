#pragma once

struct RenderInputLayoutField_t  // sizeof 0x4C, align 0xFF [trivial_dtor] (modellib)
{
    char[32] m_pSemanticName; // offset 0x0, size 0x20, align 1
    int8 m_nSemanticIndex; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
    int16 m_nOffset; // offset 0x28, size 0x2, align 2
    int8 m_nSlot; // offset 0x2A, size 0x1, align 1
    RenderSlotType_t m_nSlotType; // offset 0x2B, size 0x1, align 1
    char[32] m_szShaderSemantic; // offset 0x2C, size 0x20, align 1
};
