#pragma once

class COrnamentProp : public CDynamicProp /*0x0*/  // sizeof 0xCC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CUtlSymbolLarge m_initialOwner; // offset 0xCB0, size 0x8, align 8
    char _pad_0CB8[0x8]; // offset 0xCB8
};
