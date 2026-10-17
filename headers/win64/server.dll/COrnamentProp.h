#pragma once

class COrnamentProp : public CDynamicProp /*0x0*/  // sizeof 0xB70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    CUtlSymbolLarge m_initialOwner; // offset 0xB60, size 0x8, align 8
    char _pad_0B68[0x8]; // offset 0xB68
};
