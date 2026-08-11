#pragma once

class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x79C]; // offset 0x0
    Vector m_vBoxMins; // offset 0x79C, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x7A8, size 0xC, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
};
