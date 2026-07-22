#pragma once

class CCSObserver_ObserverServices : public CPlayer_ObserverServices /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    ObserverInterpState_t m_obsInterpState; // offset 0x68, size 0x4, align 4
    char _pad_006C[0x84]; // offset 0x6C
};
