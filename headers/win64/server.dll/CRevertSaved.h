#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    float32 m_loadTime; // offset 0x770, size 0x4, align 4
    float32 m_Duration; // offset 0x774, size 0x4, align 4
    float32 m_HoldTime; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
};
