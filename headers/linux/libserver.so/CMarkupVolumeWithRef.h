#pragma once

class CMarkupVolumeWithRef : public CMarkupVolumeTagged /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA98]; // offset 0x0
    bool m_bUseRef; // offset 0xA98, size 0x1, align 1
    char _pad_0A99[0x3]; // offset 0xA99
    Vector m_vRefPosEntitySpace; // offset 0xA9C, size 0xC, align 4
    VectorWS m_vRefPosWorldSpace; // offset 0xAA8, size 0xC, align 4
    float32 m_flRefDot; // offset 0xAB4, size 0x4, align 4
};
