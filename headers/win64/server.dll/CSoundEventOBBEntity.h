#pragma once

class CSoundEventOBBEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x558]; // offset 0x0
    Vector m_vMins; // offset 0x558, size 0xC, align 4
    Vector m_vMaxs; // offset 0x564, size 0xC, align 4
    char _pad_0570[0x10]; // offset 0x570
};
