#pragma once

class CSoundEventSphereEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x578, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x570]; // offset 0x0
    float32 m_flRadius; // offset 0x570, size 0x4, align 4
    char _pad_0574[0x4]; // offset 0x574
};
