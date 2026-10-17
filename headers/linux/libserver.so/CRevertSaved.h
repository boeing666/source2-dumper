#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    float32 m_loadTime; // offset 0xB34, size 0x4, align 4
    float32 m_Duration; // offset 0xB38, size 0x4, align 4
    float32 m_HoldTime; // offset 0xB3C, size 0x4, align 4
};
