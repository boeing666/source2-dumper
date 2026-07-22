#pragma once

struct VsInputSignatureElement_t  // sizeof 0xC4, align 0xFF [trivial_dtor] (modellib)
{
    char[64] m_pName; // offset 0x0, size 0x40, align 1
    char[64] m_pSemantic; // offset 0x40, size 0x40, align 1
    char[64] m_pD3DSemanticName; // offset 0x80, size 0x40, align 1
    int32 m_nD3DSemanticIndex; // offset 0xC0, size 0x4, align 4
};
