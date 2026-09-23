#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    float32 m_loadTime; // offset 0x850, size 0x4, align 4
    float32 m_Duration; // offset 0x854, size 0x4, align 4
    float32 m_HoldTime; // offset 0x858, size 0x4, align 4
    char _pad_085C[0x4]; // offset 0x85C
};
