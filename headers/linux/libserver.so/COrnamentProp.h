#pragma once

class COrnamentProp : public CDynamicProp /*0x0*/  // sizeof 0xE80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE78]; // offset 0x0
    CUtlSymbolLarge m_initialOwner; // offset 0xE78, size 0x8, align 8
};
