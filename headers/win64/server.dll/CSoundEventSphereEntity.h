#pragma once

class CSoundEventSphereEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x570, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x568]; // offset 0x0
    float32 m_flRadius; // offset 0x568, size 0x4, align 4
    char _pad_056C[0x4]; // offset 0x56C
};
