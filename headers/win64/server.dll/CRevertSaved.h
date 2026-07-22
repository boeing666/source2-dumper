#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    float32 m_loadTime; // offset 0x780, size 0x4, align 4
    float32 m_Duration; // offset 0x784, size 0x4, align 4
    float32 m_HoldTime; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
};
