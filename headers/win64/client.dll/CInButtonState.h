#pragma once

class CInButtonState  // sizeof 0x20, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint64[3] m_pButtonStates; // offset 0x8, size 0x18, align 8
};
