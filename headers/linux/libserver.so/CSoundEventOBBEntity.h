#pragma once

class CSoundEventOBBEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x834]; // offset 0x0
    Vector m_vMins; // offset 0x834, size 0xC, align 4
    Vector m_vMaxs; // offset 0x840, size 0xC, align 4
    char _pad_084C[0x14]; // offset 0x84C
};
