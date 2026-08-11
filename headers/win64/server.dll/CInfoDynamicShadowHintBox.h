#pragma once

class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    Vector m_vBoxMins; // offset 0x4B0, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x4BC, size 0xC, align 4
};
