#pragma once

class CSoundEventOBBEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x568]; // offset 0x0
    Vector m_vMins; // offset 0x568, size 0xC, align 4
    Vector m_vMaxs; // offset 0x574, size 0xC, align 4
    char _pad_0580[0x10]; // offset 0x580
};
