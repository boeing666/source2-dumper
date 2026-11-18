#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    float32 m_loadTime; // offset 0x8B8, size 0x4, align 4
    float32 m_Duration; // offset 0x8BC, size 0x4, align 4
    float32 m_HoldTime; // offset 0x8C0, size 0x4, align 4
    char _pad_08C4[0x4]; // offset 0x8C4
};
