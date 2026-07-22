#pragma once

class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint /*0x0*/  // sizeof 0x620, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    Vector m_vBoxMins; // offset 0x608, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x614, size 0xC, align 4
};
