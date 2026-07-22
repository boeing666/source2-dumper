#pragma once

class EmptyTestScript : public CAnimScriptBase /*0x0*/  // sizeof 0x20, align 0xFF [vtable] (host)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CAnimScriptParam< float32 > m_hTest; // offset 0x10, size 0x10, align 8
};
