#pragma once

class CMarkupVolumeWithRef : public CMarkupVolumeTagged /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    bool m_bUseRef; // offset 0x7C8, size 0x1, align 1
    char _pad_07C9[0x3]; // offset 0x7C9
    Vector m_vRefPosEntitySpace; // offset 0x7CC, size 0xC, align 4
    VectorWS m_vRefPosWorldSpace; // offset 0x7D8, size 0xC, align 4
    float32 m_flRefDot; // offset 0x7E4, size 0x4, align 4
};
