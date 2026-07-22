#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    float32 m_loadTime; // offset 0xA4C, size 0x4, align 4
    float32 m_Duration; // offset 0xA50, size 0x4, align 4
    float32 m_HoldTime; // offset 0xA54, size 0x4, align 4
};
