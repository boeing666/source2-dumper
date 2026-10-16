#pragma once

class CCSObserver_ObserverServices : public CPlayer_ObserverServices /*0x0*/  // sizeof 0x100, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x70]; // offset 0x0
    ObserverInterpState_t m_obsInterpState; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x8C]; // offset 0x74
};
