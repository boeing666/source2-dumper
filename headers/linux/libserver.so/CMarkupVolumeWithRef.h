#pragma once

class CMarkupVolumeWithRef : public CMarkupVolumeTagged /*0x0*/  // sizeof 0xAB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    bool m_bUseRef; // offset 0xA90, size 0x1, align 1
    char _pad_0A91[0x3]; // offset 0xA91
    Vector m_vRefPosEntitySpace; // offset 0xA94, size 0xC, align 4
    VectorWS m_vRefPosWorldSpace; // offset 0xAA0, size 0xC, align 4
    float32 m_flRefDot; // offset 0xAAC, size 0x4, align 4
};
