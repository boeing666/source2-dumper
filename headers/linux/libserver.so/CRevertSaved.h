#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0xBA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    float32 m_loadTime; // offset 0xB9C, size 0x4, align 4
    float32 m_Duration; // offset 0xBA0, size 0x4, align 4
    float32 m_HoldTime; // offset 0xBA4, size 0x4, align 4
};
