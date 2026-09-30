#pragma once

class CRevertSaved : public CModelPointEntity /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    float32 m_loadTime; // offset 0x878, size 0x4, align 4
    float32 m_Duration; // offset 0x87C, size 0x4, align 4
    float32 m_HoldTime; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
};
