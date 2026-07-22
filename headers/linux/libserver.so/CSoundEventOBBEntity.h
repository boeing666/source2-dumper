#pragma once

class CSoundEventOBBEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x844]; // offset 0x0
    Vector m_vMins; // offset 0x844, size 0xC, align 4
    Vector m_vMaxs; // offset 0x850, size 0xC, align 4
    char _pad_085C[0x14]; // offset 0x85C
};
