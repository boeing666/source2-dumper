#pragma once

class COrnamentProp : public CDynamicProp /*0x0*/  // sizeof 0xA00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CUtlSymbolLarge m_initialOwner; // offset 0x9F0, size 0x8, align 8
    char _pad_09F8[0x8]; // offset 0x9F8
};
