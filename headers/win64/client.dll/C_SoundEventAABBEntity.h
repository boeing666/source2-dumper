#pragma once

class C_SoundEventAABBEntity : public C_SoundEventEntity /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6C0]; // offset 0x0
    Vector m_vMins; // offset 0x6C0, size 0xC, align 4
    Vector m_vMaxs; // offset 0x6CC, size 0xC, align 4
};
