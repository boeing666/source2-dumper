#pragma once

class CAttributeContainer : public CAttributeManager /*0x0*/  // sizeof 0x140, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CEconItemView m_Item; // offset 0x68, size 0xD8, align 255
};
