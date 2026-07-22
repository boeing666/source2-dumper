#pragma once

class CSoundEventSphereEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x558]; // offset 0x0
    float32 m_flRadius; // offset 0x558, size 0x4, align 4
    char _pad_055C[0x4]; // offset 0x55C
};
