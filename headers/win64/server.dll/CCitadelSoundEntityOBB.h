#pragma once

class CCitadelSoundEntityOBB : public CSoundEventEntity /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x570]; // offset 0x0
    Vector m_vMins; // offset 0x570, size 0xC, align 4
    Vector m_vMaxs; // offset 0x57C, size 0xC, align 4
    char _pad_0588[0x18]; // offset 0x588
};
