#pragma once

class CAttributeContainer : public CAttributeManager /*0x0*/  // sizeof 0x2F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CEconItemView m_Item; // offset 0x50, size 0x2A8, align 255
};
