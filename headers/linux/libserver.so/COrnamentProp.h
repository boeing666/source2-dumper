#pragma once

class COrnamentProp : public CDynamicProp /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE20]; // offset 0x0
    CUtlSymbolLarge m_initialOwner; // offset 0xE20, size 0x8, align 8
    char _pad_0E28[0x8]; // offset 0xE28
};
