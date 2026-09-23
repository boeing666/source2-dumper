#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    float32 m_loadTime; // offset 0xB2C, size 0x4, align 4
    float32 m_Duration; // offset 0xB30, size 0x4, align 4
    float32 m_HoldTime; // offset 0xB34, size 0x4, align 4
};
