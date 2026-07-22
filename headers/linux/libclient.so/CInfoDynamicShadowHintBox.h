#pragma once

class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    Vector m_vBoxMins; // offset 0x780, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x78C, size 0xC, align 4
};
