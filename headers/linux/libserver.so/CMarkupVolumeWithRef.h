#pragma once

class CMarkupVolumeWithRef : public CMarkupVolumeTagged /*0x0*/  // sizeof 0xB90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB70]; // offset 0x0
    bool m_bUseRef; // offset 0xB70, size 0x1, align 1
    char _pad_0B71[0x3]; // offset 0xB71
    Vector m_vRefPosEntitySpace; // offset 0xB74, size 0xC, align 4
    VectorWS m_vRefPosWorldSpace; // offset 0xB80, size 0xC, align 4
    float32 m_flRefDot; // offset 0xB8C, size 0x4, align 4
};
