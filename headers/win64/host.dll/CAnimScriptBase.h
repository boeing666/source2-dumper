#pragma once

class CAnimScriptBase  // sizeof 0x10, align 0xFF [vtable abstract] (host)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bIsValid; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x7]; // offset 0x9
};
