#pragma once

class CBtNodeCondition : public CBtNodeDecorator /*0x0*/  // sizeof 0x60, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x58]; // offset 0x0
    bool m_bNegated; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x7]; // offset 0x59
};
