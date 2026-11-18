#pragma once

class CMarkupVolumeWithRef : public CMarkupVolumeTagged /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    bool m_bUseRef; // offset 0xBE0, size 0x1, align 1
    char _pad_0BE1[0x3]; // offset 0xBE1
    Vector m_vRefPosEntitySpace; // offset 0xBE4, size 0xC, align 4
    VectorWS m_vRefPosWorldSpace; // offset 0xBF0, size 0xC, align 4
    float32 m_flRefDot; // offset 0xBFC, size 0x4, align 4
};
