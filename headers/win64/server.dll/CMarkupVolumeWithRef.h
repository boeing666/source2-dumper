#pragma once

class CMarkupVolumeWithRef : public CMarkupVolumeTagged /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7C0]; // offset 0x0
    bool m_bUseRef; // offset 0x7C0, size 0x1, align 1
    char _pad_07C1[0x3]; // offset 0x7C1
    Vector m_vRefPosEntitySpace; // offset 0x7C4, size 0xC, align 4
    VectorWS m_vRefPosWorldSpace; // offset 0x7D0, size 0xC, align 4
    float32 m_flRefDot; // offset 0x7DC, size 0x4, align 4
};
